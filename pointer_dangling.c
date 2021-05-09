
/*
* penjelasan fungsi create_int_benar:
  variable integer yang dibuat di dalam fungsi
  bukanlah variable lokal lagi, dan itu adalah
  variable yang dialokasikan dari memori stack dan
  masa hidupnya tidak terbatas pada fungsi yang
  menyatakanya. Oleh karena itu dapat diakses
  dalam fungsi luar(pemanggil). Pointer menunjuk
  pada variable ini tidak menggantung lagi, dan
  meraka dapat dideferansi selama variablenya ada
  dan tidak dibebaskan. Akhirnya variable menjadi
  dealocated dengan memanggil fungsi free() sebagai
  akhir masa hidupnya. Perhatikan bahwa membatalkan kandungan
  variable stack adalah wajib ketika tidak diperlukan lagi.
*/
#include <stdio.h>
#include <stdlib.h>

int *create_int(int default_value)
{
   int var = default_value;
   return &var;
}
int *create_int_benar(int default_value)
{
   int *var = (int*)malloc(sizeof(int));
   *var = default_value;
   return var;
}

int main() {
   int *ptr = NULL;
   // ptr = create_int(10); segmentaion vault
   ptr = create_int_benar(10);

   printf("%d\n", *ptr);

   free(ptr);

   return 0;
}
