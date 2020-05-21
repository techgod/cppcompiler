import re
import sys

opf = open("Outputs/assembly_op.txt","w")
sys.stdout= opf

icg_file = sys.argv[1]

registers=['R0','R1','R2','R3','R4','R5','R6','R7','R8','R9','R10','R11','R12']
#registers=['R0','R1','R2','R3','R4']

#loops={}

# Has variable to register mapping (e.g. x:r0, a:r1).
alloc={}

#Artithmetic Binary Operators saved for next line. 
lis=[]

#Relational Operators saved for next line.
comp=[]

intervals ={}

#Start by doing a Linear Scan -> Scanning the ICG (3 Address Code)
def findFirstOccurence(icg_lines,x):
    #Get first occurence of variable from start
    for i in range(len(icg_lines)):
        if x in icg_lines[i].split():
            return i

def findLastOccurence(icg_lines,x):
    #Get first occurence of variable from beginning
    for i in range(len(icg_lines)-1,-1,-1):
        if x in icg_lines[i].split():
            return i

def makeAliveIntervals(icg_lines):
    # All variables are at the start of the line
    vars = set()
    keywords = {"ifFalse","goto"}
    for i in range(len(icg_lines)):
        # Make sure its not a keyword, label or a temporary variable.
        first_word = icg_lines[i].split()[0]
        if first_word in keywords or re.search("[0-9]+:",first_word): #or re.search("t[0-9]+",first_word):
            continue 
        if first_word not in vars:
            vars.add(first_word)

    #print("Variables",vars)
    
    #Now all variables are there, we need to find their first and last occurences to get alive intervals.
    for var in vars:
        intervals[var]=[]
        intervals[var].append(findFirstOccurence(icg_lines,var))
        intervals[var].append(findLastOccurence(icg_lines,var))

    #print("Itervals",intervals)

def freeRegisters(i):
    for var in list(alloc.keys()):
        if intervals[var][1] < i:
            # We can free this register now, but we have to store the corresponding value in memory
            print("STR "+var+','+alloc[var])
            del intervals[var]
            registers.insert(0,alloc[var])
            del alloc[var]

def isdigit(x):
    var=""
    if(x.isdigit()):
        var+=("#"+x)
    else:
        if x in alloc:
            var+=alloc[x]
    return var

def allocateRegister(var):
    if(len(registers)>1):
        reg = registers.pop(0)
        alloc[var] = reg
        return reg,False
    else:
        reg = registers[0]
        return reg,True

def assemble(lines, message = "") :
    for i in range(len(lines)):
        #print("Line: ",i)
        #print("Alloc:",alloc)

        token=lines[i].split()
        #print(token)

        #Labels
        if(len(token)==1):
            print(token[0])

        #Goto <Label> Instruction
        elif(len(token)==2):
            print('B '+ token[1])

        elif(len(token)==3):
            # Load Data into Registers
            if(token[0] in alloc and len(lis)==0):
                print("LDR "+ reg +','+isdigit(token[2]))

            # Assignment Operation without any prior arithmetic operation
            if(token[1]=='=' and token[0] not in alloc and len(lis)==0):
                reg,do_str=allocateRegister(token[0])
                print("LDR "+ reg +','+isdigit(token[2]))
                if do_str:
                    print("STR "+token[0]+','+reg)


            if(len(lis)!=0):
                if(lis[0][0]==token[2]):
                    # We just had an arithmetic operation before this. Now we save value in a register.
                    #i.e. lis will have some value like t1 = x * i
                    #and our token will be something like p = t1 
                    do_str = False
                    register = token #
                    if(token[0] not in alloc):
                        reg,do_str=allocateRegister(token[0])
                        register = reg
                    if not do_str:
                        register = alloc[token[0]]

                    if(lis[0][3]=='+'):
                        print('ADD '+register+','+alloc[lis[0][2]]+','+isdigit(lis[0][4]))
                        lis.pop(0)
                    elif(lis[0][3]=='-'):
                        print('SUB '+register+','+alloc[lis[0][2]]+','+isdigit(lis[0][4]))
                        lis.pop(0)
                    elif(lis[0][3]=='*'):
                        print('MUL '+register+','+alloc[lis[0][2]]+','+isdigit(lis[0][4]))
                        lis.pop(0)
                    elif(lis[0][3]=='/'):
                        print('DIV '+register+','+alloc[lis[0][2]]+','+isdigit(lis[0][4]))
                        lis.pop(0)
                    if do_str:
                        print("STR "+token[0]+','+reg)

        if(len(token)==4):
            #ifFalse Condition
            #Comparision Condition is always called before this, so we get type of comparision from there.
            #token[3] will have the label to go to.

            if(comp[0]=='>'):
                print('BLE '+token[3])
            if(comp[0]=='>='):
                print('BLT '+token[3])
            if(comp[0]=='<='):
                print('BGT '+token[3])
            if(comp[0]=='<'):
                print('BGE '+token[3])
            if(comp[0]=='=='):
                print('BNE '+token[3])
            if(comp[0]=='!='):
                print('BEQ '+token[3])
        
            #Clear the comparision condition
            comp.pop(0)

        if(len(token)==5):
            if(token[3]!='+' and token[3]!='-' and token[3]!='*' and token[3]!='/'):
                # Found a comparision condition
                print('CMP ' + alloc[token[2]] + ','  + isdigit(token[4] ))

                #Save for the ifFalse condition coming up next
                comp.append(token[3])
            else:
                # It's one of the arithmetic operations.
                # Saving this to be used in the next line.
                lis.append(token)

        #Store values of registers which end at this line.
        freeRegisters(i)


    for var in alloc:
        if(not re.search("^t[0-9]+", var)):
            print("STR "+var+','+alloc[var])


if __name__ == "__main__" :
    if len(sys.argv) == 2 :
        icg_file = str(sys.argv[1])

    list_of_lines = []
    
    f = open(icg_file, "r")
    for line in f :
        list_of_lines.append(line.strip())
    f.close()
    #print(list_of_lines)
    makeAliveIntervals(list_of_lines)
    assemble(list_of_lines, "//ICG")
