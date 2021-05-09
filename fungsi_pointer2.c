/*
Kata kunci Typedef memungkinkan Anda untuk menentukan alias untuk tipe yang sudah ditentukan. Ada dua alias tipe baru dalam contoh sebelumnya: bool_t, yang merupakan alias untuk tipe int, dan tipe less_than_func_t, yang merupakan tipe alias untuk jenis pointer fungsi, bool_t (*) (int, int). Alias ini menambahkan keterbacaan ke kode dan memungkinkan Anda memilih nama yang lebih pendek untuk jenis yang panjang dan kompleks. Dalam C, nama tipe baru biasanya berakhir dengan _t oleh konvensi, dan Anda dapat menemukan konvensi ini di banyak alias tipe standar lainnya seperti size_t dan time_t.

*/

#include <stdio.h>

typedef int bool_t;

typedef bool_t (*less_than_func_t)(int, int);

bool_t less_than(int a, int b) {
 return a < b ? 1 : 0;
}
bool_t less_than_modular(int a, int b) {
 return (a % 5) < (b % 5) ? 1 : 0;
}

int main(int argc, char** argv) {
 less_than_func_t func_ptr = NULL;
 func_ptr = &less_than;

 bool_t result = func_ptr(3, 7);
 printf("%d\n", result);

 func_ptr = &less_than_modular;
 result = func_ptr(3, 7);

 printf("%d\n", result);

 return 0;
}
