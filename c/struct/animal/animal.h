#include "stdio.h"

#ifndef ANIMAL_H
#define ANIMAL_H

typedef struct {
    int legs;
    int eyes;
    float eyesight;
    int weight;
    int height;
} Animal;

void printanimal(Animal);

#endif