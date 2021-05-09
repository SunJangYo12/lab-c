#include <stdio.h>
#include <stdlib.h>

void cek(int *zz) {
   printf("%d %p\n", *zz, &zz);
   *zz = 8;
}

int main() {
   int a = 3;

   printf("%d %p\n", a, &a);
   cek(&a);
   printf("%d %p\n", a, &a);
}
