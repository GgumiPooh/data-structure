#ifndef SOLDIER_H
#define SOLDIER_H

typedef struct {
    char* name; // 음식 이름
    double calories; // 칼로리
    int taste_range; // 0~10 맛 레벨
} Food;

// 매개변수로 name, calories, taste_range로 전달받음
// 전달받은 값들로 Food 객체를 생성하여 반환하는 함수
Food make_food(char* name, double calories, int taste_range);

void printFoodArray(Food* foods, int length);
void printFood(Food food);

#endif