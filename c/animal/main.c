#include "animal.h"

int main(void) {
    Animal cat;
    cat.legs = 4;
    cat.eyes  = 2;

    Animal dog = {
        4, 2, 1.2, 99, 120
    };

    Animal Ggumi = {
        4, 2, 0.3, 4, 50
    };

    printanimal(Ggumi);
    printanimal(dog);
}