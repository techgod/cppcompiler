lex icg.l
yacc -d icg.y
gcc y.tab.c lex.yy.c 
./a.out<input.cpp
cp IntermediateCode/icg.txt ../AssemblyCode