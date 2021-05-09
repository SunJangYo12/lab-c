#include <stdio.h>
#include <stdlib.h> // fot c library heap memori function

void print_mem_maps() {
   FILE *fd = fopen("/proc/self/maps", "r");

   if (!fd) {
      printf("Could not open maps file.\n");
      exit(1);
   }

   char line[1024];
   while (!feof(fd)) {
      fgets(line, 1024, fd);
      printf("> %s", line);
   }
   fclose(fd);
}

int main(int argc, char **argv) {
   char *ptr1 = (char*)malloc(10 * sizeof(char)); // alocate 10 bytes without initalize

   printf("Address of ptr1: %p\n", (void*)&ptr1);
   printf("Memory allocated by malloc at %p: ", (void*)ptr1);
   for (int i=0; i<10; i++) {
       printf("0x%02x ", (unsigned char)ptr1[i]);
   }
   printf("\n\n");


   char *ptr2 = (char*)calloc(10, sizeof(char)); // alocate 10 bytes all initalize to zero

   printf("Address of ptr2: %p\n", (void*)&ptr2);
   printf("Memory allocated by calloc at %p: ", (void*)ptr2);
   for (int i=0; i<10; i++) {
       printf("0x%02x ", (unsigned char)ptr2[i]);
   }
   printf("\n\n");

#ifdef __linux__
   print_mem_maps();
#endif

   free(ptr1);
   free(ptr2);

   return 0;
}
