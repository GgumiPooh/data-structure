#include <iostream>
#include "MyVector.h"

using namespace std;

int main(void) {
    MyVector vec;

    for (int i = 0; i < 20000; ++i) {
        vec.push_back(i);
    }
    
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i];
    }

    return 0;
}