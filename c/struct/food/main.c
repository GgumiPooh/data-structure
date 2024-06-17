#include "stdio.h"
#include "food.h"

int main(void) {
    Food myFoods[5] = {
        {
            "pizza",
            230,
            10
        },
        {
            "tteokbokki",
            250,
            10
        },
        {
            "tteokbokki",
            250,
            10
        },
        {
            "tteokbokki",
            250,
            10
        },
        {
            "tteokbokki",
            250,
            10
        }
    };

    printFoodArray(myFoods, 5);

    return 0;
}