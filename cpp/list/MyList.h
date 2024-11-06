#ifndef MYLIST_H
#define MYLIST_H

class MyList {
private:    
    class Node {
    public:
        int data;
        Node* next_ptr;
    };

private:
    Node* first_ptr;

public:
    MyList();

    ~MyList();

    void push_back(const int& val);

    void pop_back();

    int size() const;

    int &back();

    const int &back() const;
};

#endif