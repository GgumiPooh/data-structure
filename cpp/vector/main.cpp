#include "MyVector.h"
#include <iostream>

using namespace std;

int main(void)
{
    MyVector vec(4, 6);
    vec.push_back(1);
    vec.push_back(9);
    vec.push_back(3);
    vec.push_back(4);
   vec.pop_back();
    for(int i = 0; i < vec.size(); ++i) cout << vec[i] << endl;
    return 0;
}

