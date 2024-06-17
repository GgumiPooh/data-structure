#include "food.h"
#include "stdio.h" 

Food make_food(char* name, double calories, int taste_range) {
    Food someFood = {
        name, calories, taste_range
    };
    return someFood;
}

void printFoodArray(Food* someFoods, int length){
    for(int i = 0; i < length; ++i) {
        printFood(someFoods[i]);
    }
}

void printFood(Food someFood){
    printf("name : %s, calories : %lf, taste range : %d", someFood.name, someFood.calories, someFood.taste_range);
}