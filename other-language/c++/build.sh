g++ -c -g -std=c++11 -I$PWD/.. Stack.cpp -o Stack.o
g++ -L$PWD/.. Stack.o -lcstack -o cstack_cpp.out
LD_LIBRARY_PATH=$PWD/.. ./cstack_cpp.out
