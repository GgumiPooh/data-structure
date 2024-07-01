#ifndef QUEUE_H
#define QUEUE_H
#include "stdio.h"
#include "stdlib.h"


typedef struct Node{
    int data;
    struct Node* next;
} Node;

Node* create_node(int data);

int push(Node** headp, Node** tailp, int data);

int pop(Node** headp, Node** tailp);

int size(Node* head);

int empty(Node* head);

int front(Node* head);

int back(Node* tail);

void print_queue(Node* head);

void free_queue(Node** head, Node** tail);

#endif //QUEUE_H