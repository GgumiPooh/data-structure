
#include "MyVector.h"
#include <iostream>

using namespace std;

MyVector::MyVector(int required_size, int initial_value)
    : max_size { required_size }
    , cursor { required_size }
{
    if (max_size == 0) {
        array = nullptr;
    } else {
        array = new int[max_size];
        for (cursor = 0; cursor < max_size; ++cursor) {
            array[cursor] = initial_value;
        }
    }
}

MyVector::~MyVector()
{
    if (array == nullptr)
        return;
    delete[] array;
}

void MyVector::push_back(const int& value)
{
    if (cursor == max_size) {
        if (max_size >= 1) {
            int* new_array = new int[max_size * 2];
            memcpy(new_array, array, max_size);
            max_size *= 2;
            delete[] array;
            array = new_array;
            array[cursor++] = value;
        } else {
            max_size = 1;
            array = new int(value);
        }
    } else {
        array[cursor++] = value;
    }
}

void MyVector::pop_back()
{
    if (cursor > 0)
        --cursor;
}

int MyVector::size() const
{
    return cursor;
}

int& MyVector::operator[](const int index)
{
    if (index >= 0 && index < cursor)
        return array[index];

    throw out_of_range("Index out of range");
}

const int& MyVector::operator[](const int index) const
{
    if (index >= 0 && index < cursor)
        return array[index];

    throw out_of_range("Index out of range");
}
