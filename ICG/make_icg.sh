lex icg.l
yacc -d icg.y
gcc y.tab.c lex.yy.c 
./a.out < ../Tests/test.cpp