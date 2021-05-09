#include <string.h>
#ifndef OOP_OBJECT_H
#define OOP_OBJECT_H

// atribut
typedef struct {
    char name[12];
    double speed;
    double fuel;
} car_t;

// method
void car_construct(car_t*, const char*);
void car_destruct(car_t*);
void car_accelerate(car_t*);
void car_brake(car_t*);
void car_refuel(car_t*, double);

#endif

void car_construct(car_t* car, const char *name) {
    strcpy(car->name, name);
    car->speed = 0.0;
    car->fuel = 0.0;
}

void car_destruct(car_t* car) {
}

void car_accelerate(car_t* car) {
    car->speed += 0.05;
    car->fuel -= 1.0;
    if (car->fuel < 0.0) {
       car->fuel = 0.0;
    }
}

void car_brake(car_t* car) {
    car->speed -= 0.07;
    if (car->speed < 0.0) {
       car->speed = 0.0;
    }
    car->fuel -= 2.0;
    if (car->fuel < 0.0) {
       car->fuel = 0.0;
    }
}

void car_refuel(car_t* car, double amount) {
    car->fuel = amount;
}
