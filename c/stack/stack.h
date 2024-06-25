#ifndef STACK_H
#define STACK_H
#include "stdio.h"
#include "stdlib.h"


typedef struct Node {
    int data;          
    struct Node* next; 
} Node;

// Node 하나를 만들어 반환하는 함수. 실패하면 NULL 반환
Node* create_node(int data);

// 스택의 맨 위에 새 노드를 추가하는 함수. 성공하면 0, 실패하면 -1 반환
int push(Node** head, int data);

// 스택의 맨 위에 있는 노드를 삭제하고 그 노드의 데이터를 반환하는 함수. 실패하면 -1 반환
int pop(Node** head);

// 스택에 있는 노드의 개수를 반환하는 함수
int size(Node* head);

// 스택이 비어있는지 확인하는 함수. 비어있으면 1, 아니면 0 반환
int empty(Node* head);

// 스택의 맨 위에 있는 노드의 데이터를 반환하는 함수. 실패하면 -1 반환
int top(Node* head);

#endif //STACK.H