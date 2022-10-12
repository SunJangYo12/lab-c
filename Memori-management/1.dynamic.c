#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char name[100];
    char *deskripsi;

    strcpy(name, "Dina");

    //Alocate dynamic memory
    deskripsi = malloc(200 * sizeof(char));

    // Sama aja ini menggunakan calloc()
//  deskripsi = calloc(200, sizeof(char));

    if (deskripsi == NULL)
        fprintf(stderr, "Error, unable to allocate required memory\n");
    else
        strcpy(deskripsi, "Dina lagi mainan mememk dengan riki\n");

    printf("Name : %s\n", name);
    printf("Desk : %s\n", deskripsi);
}
