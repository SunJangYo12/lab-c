#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int xindex = 5; // int tersimpan di .data (inisialisasi)
char *str;      // string tersimaon di .bss (tidak di inisialisasi)
int nothing;    // int tersimpan di .bss (tidak diinisialisasi)

void func1(int c) {
    int i = c; // tersimpan di stack
    str = (char*)malloc(10 *sizeof(char)); // mencadangkan 10 karakter di heap
    strncpy(str, "abcde", 5); // copy 5 karakter "abcdr" ke str
}

int main() {
   func1(1); // main call function dengan argumen
}
