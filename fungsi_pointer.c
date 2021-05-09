/*

Di kotak kode sebelumnya, FUNC_PTR adalah pointer fungsi. Ini hanya dapat menunjuk ke kelas fungsi tertentu yang cocok dengan tanda tangannya. Tanda tangan membatasi pointer untuk hanya menunjuk ke fungsi yang menerima dua argumen integer dan mengembalikan hasil integer. Seperti yang Anda lihat, kami telah mendefinisikan dua fungsi yang disebut jumlah dan kurangi yang cocok dengan tanda tangan pointer Func_PTR. Contoh sebelumnya menggunakan pointer fungsi FUNC_PTT untuk menunjuk ke jumlah dan mengurangi fungsi secara terpisah, lalu memanggil mereka dengan argumen yang sama dan membandingkan hasilnya. Ini adalah output dari contoh:

Seperti yang Anda lihat dalam Contoh 1.19, kita dapat memanggil fungsi yang berbeda untuk daftar argumen yang sama menggunakan pointer fungsi tunggal, dan ini adalah fitur penting. Jika Anda terbiasa dengan pemrograman berorientasi objek, hal pertama yang terlintas dalam pikiran adalah polimorfisme dan fungsi virtual. Bahkan, ini adalah satu-satunya cara untuk mendukung polimorfisme dalam C dan meniru fungsi virtual C ++. Kami akan membahas OOP sebagai bagian dari bagian ketiga buku, Obyek Orientation. Seperti pointer variabel, penting untuk menginisialisasi pointer fungsi dengan benar. Untuk pointer fungsi yang tidak akan diinisialisasi segera setelah deklarasi, wajib membuat mereka nol. Nultifikasi pointer fungsi ditunjukkan dalam contoh sebelumnya, dan itu sangat mirip dengan pointer variabel.
*/
#include <stdio.h>

int sum(int a, int b) {
   return a + b;
}
int subtract(int a, int b) {
   return a - b;
}

int main() {
   int (*func_ptr)(int, int);
   func_ptr = NULL;
   func_ptr = &sum;
   int result = func_ptr(5, 4);

   printf("Sum: %d\n", result);

   func_ptr = &subtract;
   result = func_ptr(5, 4);

   printf("Subtract: %d\n", result);

   return 0;
}
