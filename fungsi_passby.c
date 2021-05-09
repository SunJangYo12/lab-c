
/*
* penjelasa func_benar:
  Seperti yang anda lihat nilai pointer tidak
  berubah setelah panggilan fungsi. Ini berarti
  bahwa pointer disahkan sebagai argumen pass-by-value.
  Deferencing pointer di dalam fungsi func_benar telah
  memungkinkan mengakses variable ke pointer dimana pointer menunjuk.
  Tetapi mengubah nilai parameter pointer didalam fungsi tidak mengubah
  argumen rekananya didalam pemanggil. Selama panggilan fungsi di C semua
  argumen dilewatkan oleh nilai dan deferencing pointer memungkinkan modifikasi
  variable fungsi pemenggil,zjfklsdfj
*/

#include <stdio.h>

void func(int a) {
   a = 5;
}

void func_benar(int *a) {
   int b = 9;
   *a = 5;
   a = &b;
}

int main() {
   int x = 3;
   int *xptr = &x;

   printf("sebelum call: %d\n", x);
   printf("pointer sebelum fungsi call: %p\n\n", (void*)xptr);

   func_benar(xptr);
   printf("sesudah call: %d\n", x);
   printf("pointer sesudah fungsi call: %p\n", (void*)xptr);

   return 0;
}

int main_sama() {
   int x = 3;
   printf("sebelum call: %d\n", x);

   func(x);
   printf("sesudah call: %d\n", x);
}
