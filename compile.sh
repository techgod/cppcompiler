YELLOW='\033[1;33m'
NOCOLOR='\033[0m'

echo "${YELLOW}C++ Compiler!${NOCOLOR}"

echo "Starting build.\n"
echo "Step 1/3: Generating ICG..."

cd ICG
lex icg.l
yacc -d icg.y
gcc y.tab.c lex.yy.c 
./a.out < ../Tests/test.cpp 

echo "Step 1/3: Done.\n"
echo "Step 2/3: Optimizing ICG..."

python3 Optimize/optimize.py Outputs/icg.txt > /dev/null
cp Optimize/icg_o.txt ../AssemblyCode

echo "Step 2/3: Done.\n"

echo "Step 3/3: Generating Assembly Code..."

cd ..
cd AssemblyCode
python3 assembly.py icg_o.txt > /dev/null
cd ..

echo "Step 3/3: Done.\n"

echo "${YELLOW}Build Successful!${NOCOLOR}"
echo "Output written to respective Output Directories\n"




