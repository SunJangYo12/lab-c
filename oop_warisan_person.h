#ifndef OOP_WARISAN_PERSON_H
#define OOP_WARISAN_PERSON_H

// Forward declaration
struct person_t;

// Memori allocator
struct person_t *person_new();

// Constructor & destructor
void person_ctor(struct person_t*, const char*, const char*, unsigned int);
void person_dtor(struct person_t*);

// metode
void person_get_first_name(struct person_t*, char*);
void person_get_last_name(struct person_t*, char*);
unsigned int person_get_birth_year(struct person_t*);
#endif
