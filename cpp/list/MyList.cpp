#include "MyList.h"
#include <iostream>

using namespace std;

MyList::MyList()
    : first_ptr(nullptr)
{
}

MyList::~MyList()
{
    delete[] this->first_ptr;
}

void MyList::push_back(const int& val)
{
    Node* new_node = new Node;
    new_node->data = val;
    new_node->next_ptr = nullptr;

    if (this->first_ptr == nullptr) {
        this->first_ptr = new_node;
        return;
    }

    Node* cursor = this->first_ptr;
    while (cursor->next_ptr != nullptr) {
        cursor = cursor->next_ptr;
    }

    cursor->next_ptr = new_node;
}

void MyList::pop_back()
{
    if (first_ptr == nullptr)
        return;

    if (first_ptr->next_ptr == nullptr) {
        delete first_ptr;
        first_ptr = nullptr;
        return;
    }

    Node* cursor = this->first_ptr;
    while (cursor->next_ptr->next_ptr != nullptr) {
        cursor = cursor->next_ptr;
    }

    delete cursor->next_ptr;
    cursor->next_ptr = nullptr;
}

int MyList::size() const
{
    if (this->first_ptr == nullptr)
        return 0;

    Node* cursor = this->first_ptr;
    int length = 1;
    while (cursor->next_ptr != nullptr) {
        cursor = cursor->next_ptr;
        ++length;
    }

    return length;
}

int& MyList::back()
{
    Node* cursor = this->first_ptr;
    while (cursor->next_ptr != nullptr)
        cursor = cursor->next_ptr;

    return cursor->data;
}

const int& MyList::back() const
{
    Node* cursor = this->first_ptr;
    while (cursor->next_ptr != nullptr)
        cursor = cursor->next_ptr;

    return cursor->data;
}
