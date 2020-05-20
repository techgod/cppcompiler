cd ICG

lex icg.l
yacc -d icg.y
gcc y.tab.c lex.yy.c 
./a.out<Tests/t2.cpp
python3 Optimize/optimize.py IntermediateCode/icg.txt
cp Optimize/icg_o.txt ../AssemblyCode