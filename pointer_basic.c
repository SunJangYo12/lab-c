#include <stdio.h>
#include <stdlib.h> // free()

void pointer_ke_pointer() {
   char S[] = "Arista";
   char *P = S;

   printf("Alamat yang ditunjuk P = %p\n", P);
   printf("Nilai P = %s\n", P);
   printf("Alamat yang ditunjuk &P = %p\n", &P);
   printf("Nilai *P = %c\n", *P);
}

void pointer_fungsi_param_tukar(int *px, int *py) {
   int temp = *px;
   *px = *py;
   *py = temp;
}
void pointer_fungsi_param() {
   int a = 10;
   int b = 50;
   void (*pT)(int*, int*);

   pT = pointer_fungsi_param_tukar; // call fungsi menggunakan pointer

   printf("Sebelum tukar nilai: \n");
   printf("Nilai a = %d\n", a);
   printf("Nilai b = %d\n\n", b);

   /* * * hapus salah satu untuk perbandingan call biasa dan pointer * * */
   //pointer_fungsi_param_tukar(&a, &b); // menukarkan alamat dari var a dan b
   pT(&a, &b);                           // menukar menggunakan pointer

   printf("Setelah tukar nilai: \n");
   printf("Nilai a = %d\n", a);
   printf("Nilai b = %d\n", b);
}

void pointer_aritmatika() {
   int A[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

   int *p = &A[0];

   printf("Menggunakan array: \t\tMenggunakan pointer: \n");
   for (int i=0; i<10; i++, p++) { // pointer aritmaik cuma bisa penjumlahan dan pengurangan
      printf("%d\t\t\t\t%d\n", A[i], *p);
   }

}

void pointer_tanpa_tipe() {
   void *p;
   int x = 21;
   double y = 5.42;

   p = (int*)malloc(sizeof(x));
   p = &x;

   printf("\n--- Pointer tanpa tipe ---\n");
   printf("Nilai X  : %d\n", x);
   printf("Nilai &X : %p\n", &x);
   printf("Nilai *p : %d\n", *((int*) p));
   printf("Nilai p  : %p\n\n", p);

   free(p); // ini wajib

   p = (double*)malloc(sizeof(y));
   p = &y;

   printf("Nilai Y  : %3.2f\n", y);
   printf("Nilai &Y : %p\n", &y);
   printf("Nilai *p : %3.2f\n", *((double*) p));
   printf("Nilai p  : %p\n\n", p);

   free(p);
}

void basic() {
   int *p;
   int x;

   x = 10;
   p = &x; // mengisikan alamat dari variable x

   printf("Nilai X  : %d\n", x);
   printf("Nilai &X : %p\n", &x);
   printf("Nilai *p : %d\n", *p);
   printf("Nilai p  : %p\n\n", p);

   *p = 20; // mengisikan nilai ke pointer *p

   printf("Nilai X  : %d\n", x);
   printf("Nilai &X : %p\n", &x);
   printf("Nilai *p : %d\n", *p);
   printf("Nilai p  : %p\n\n", p);

}
int main() {
   //pointer_tanpa_tipe(); hasilnya error
   //pointer_aritmatika();
   //pointer_fungsi_param();
   pointer_ke_pointer();

   return 0;
}
