#ifndef MY_VECTOR
#define MY_VECTOR

class MyVector {
public:
    MyVector(int required_size = 0, int initial_value = 0);
    ~MyVector();

    void push_back(const int& value);
    void pop_back();
    int size() const;
    int& operator[](const int index);
    const int& operator[](const int index) const;

private:
    int max_size;
    int* array;
    int cursor;
};

#endif
