/* * * * COMPILE * * * * * * * * * * * * * *
* $ gcc -c oop_warisan_person.c -o person.o
* $ gcc -c oop_warisan_student.c -o student.o
* $ gcc -c oop_warisan_main.c -o main.o
* $ gcc person.o student.o -o main
*
* * * * * * * * * * * * * * * * * * * * * *
*/


#include <stdio.h>
#include <stdlib.h>

#include "oop_warisan_person.h"
#include "oop_warisan_student.h"

int main(int argc, char **argv) {
     struct student_t *student = student_new(); // create student object
     student_ctor(student, "John", "Doe", 2000, "TA5667", 134); // construct student

     char buffer[32];
     struct person_t *person_ptr = (struct person_t*)student; // membebani pointer ke tipe induk

     person_get_first_name(person_ptr, buffer);
     printf("First name: %s\n", buffer);
     person_get_last_name(person_ptr, buffer);
     printf("Last name: %s\n", buffer);

     printf("Birth year: %d\n", person_get_birth_year(person_ptr));

     // now read student atribut
     student_get_student_number(student, buffer);
     printf("Student number: %s\n", buffer);
     printf("Passed credits: %d\n", student_get_passed_credits(student));

     // destruct and free student object
     student_dtor(student);
     free(student);

     return 0;
}
