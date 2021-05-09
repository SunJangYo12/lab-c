gcc -c -g -fPIC cstack.c -o cstack.o
gcc -shared cstack.o -o libcstack.so
