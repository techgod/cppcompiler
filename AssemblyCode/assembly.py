import re
import sys

opf = open("Outputs/assembly_op.txt","w")
sys.stdout= opf

icg_file = sys.argv[1]

registers=['R0','R1','R2','R3','R4','R5','R6','R7','R8','R9','R10','R11','R12']
#registers=['R0','R1','R2','R3','R4','R5','R6','R7']

def istemp(var):
    return bool(re.match(r"^t[0-9]+$", var))


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
            if(istemp(var)==0):
                #print("STR "+var+','+alloc[var])
                store(alloc[var],var)
            del intervals[var]
            registers.insert(0,alloc[var])
            del alloc[var]

def isdigit(x):
    var=""
    if(x.isnumeric()):
        var+=("#"+x)
    else:
        if x in alloc:
            var+=alloc[x]
    return var


def allocateRegister(var):
    if(len(registers)>4):
        reg = registers.pop(0)
        alloc[var] = reg
        return reg,False
    else:
        reg = registers.pop(0)
        alloc[var] = reg
        return reg,True

def store(reg,mem):
    adr=registers.pop()
    print("ADR "+adr+',='+mem)
    print("STR "+'[' + adr+'],'+reg)
    print()
    registers.insert(len(registers),adr)

def load(reg,mem):
    adr=registers.pop()
    print("ADR "+adr+',='+mem)
    print("LDR "+reg+',[' + adr+']')
    print()
    registers.insert(len(registers),adr)

in_control_struct = False

def assemble(lines) :
    global in_control_struct
    for i in range(len(lines)):
        #print("Line: ",i)
        #print("Alloc:",alloc)

        token=lines[i].split()
        #print(token)

        #Labels
        if(len(token)==1):
            print(token[0])
            in_control_struct = False

        #Goto <Label> Instruction
        elif(len(token)==2):
            print('B '+ token[1])

        elif(len(token)==3):
            # Load data into registers when register already allocated
            if(token[0] in alloc and len(lis)==0):
                print("MOV "+ reg +','+isdigit(token[2]))

            # Assignment Operation without any prior arithmetic operation
            if(token[1]=='=' and token[0] not in alloc and token[2].isdigit() and len(lis)==0):
                reg,do_str=allocateRegister(token[0])
                print("MOV "+ reg +','+isdigit(token[2]))
                if do_str:
                    #print("STR "+token[0]+','+reg)
                    alloc.pop(token[0])
                    store(reg,token[0])
                    registers.insert(0,reg)

            elif(token[2].isdigit()==False and len(lis)==0):
                reg,do_str=allocateRegister(token[0])
                if token[2] in alloc:
                    print("MOV "+ reg+','+ alloc[token[2]]) #get corresponding register for mem location
                else:
                    #print("LDR "+ reg+','+ (token[2])) 
                    load(reg,token[0])

            if(len(lis)!=0):
                if(lis[0][0]==token[2]):
                    # We just had an arithmetic operation before this. Now we save value in a register.
                    #i.e. lis will have some value like t1 = x * i
                    #and our token will be something like p = t1 

                    do_str1 = False
                    do_str2 = False
                    do_str3 = False

                    reg1 = token
                    op1 = token
                    op2 = token

                    if(token[0] not in alloc):
                        reg,do_str1=allocateRegister(token[0])
                        reg1 = reg
                    else:
                        reg1 = alloc[token[0]]

                    if lis[0][2].isnumeric():
                        op1 = isdigit(lis[0][2])
                    else:
                        if lis[0][2] not in alloc:
                            reg,do_str2=allocateRegister(lis[0][2])
                            load(reg,lis[0][2])
                            op1 = reg
                        else:
                            op1 = isdigit(lis[0][2])

                    if lis[0][4].isnumeric():
                        op2 = isdigit(lis[0][4])
                    else:
                        if lis[0][4] not in alloc:
                            reg,do_str3=allocateRegister(lis[0][4])
                            load(reg,lis[0][4])
                            op2 = reg
                        else:
                            op2 = isdigit(lis[0][4])      

                    if(lis[0][3]=='+'):
                        print('ADD '+reg1+','+op1+','+op2)
                    elif(lis[0][3]=='-'):
                        print('SUB '+reg1+','+op1+','+op2)
                    elif(lis[0][3]=='*'):
                        print('MUL '+reg1+','+op1+','+op2)
                    elif(lis[0][3]=='/'):
                        print('SDIV '+reg1+','+op1+','+op2)

                    if do_str1:
                        alloc.pop(token[0])
                        store(reg1,token[0])
                        registers.insert(0,reg1)
                    if do_str2:
                        alloc.pop(lis[0][2])
                        store(op1,lis[0][2])
                        registers.insert(0,op1)
                    if do_str3:
                        alloc.pop(lis[0][4])
                        store(op2,lis[0][4])
                        registers.insert(0,op2)
                    
                    lis.pop(0)

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
                in_control_struct = True
                #Save for the ifFalse condition coming up next
                comp.append(token[3])
            else:
                # It's one of the arithmetic operations.
                # Saving this to be used in the next line.
                lis.append(token)

        #Store values of registers which end at this line.
        if not in_control_struct:
            freeRegisters(i)


    for var in alloc:
        if(not istemp(var)):
            #print("STR "+var+','+alloc[var])
            store(alloc[var],var)


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
    assemble(list_of_lines)