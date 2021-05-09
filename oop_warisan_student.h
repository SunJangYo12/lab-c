#ifndef OOP_WARISAN_STUDENT_H
#define OOP_WARISAN_STUDENT_H

// Forward declaration
struct student_t;

// memory alocator
struct student_t *student_new();

// constructor
void student_ctor(struct student_t*,
     const char*,             /* first name */
     const char *,            /* last name */
     unsigned int birth_year, /* birth year */
     const char*,             /* student number */
     unsigned int);           /* passed credit */

// destructor
void student_dtor(struct student_t*);

// metode
void student_get_student_number(struct student_t*, char*);
unsigned int student_get_passed_credits(struct student_t *);

#endif
