#include "stdio.h"

/*
    과제:
        아래 함수들을 main 함수 아래에 구현코드를 작성해봐!
        최종적으로 main 함수에 작성한 코드가 잘 동작하는지 확인해보자.
        main함수는 수정하면 안 됨...
*/

typedef struct Node {
    int data;          
    struct Node* next; 
} Node;

// Node 하나를 만들어 반환하는 함수. 실패하면 NULL 반환
Node* create_node(int data);

// 스택의 맨 위에 새 노드를 추가하는 함수. 성공하면 0, 실패하면 -1 반환
int push(Node** headp, int data);

// 스택의 맨 위에 있는 노드를 삭제하고 그 노드의 데이터를 반환하는 함수. 실패하면 -1 반환
int pop(Node** headp);

// 스택에 있는 노드의 개수를 반환하는 함수
int size(Node* head);

// 스택이 비어있는지 확인하는 함수. 비어있으면 1, 아니면 0 반환
int empty(Node* head);

// 스택의 맨 위에 있는 노드의 데이터를 반환하는 함수. 실패하면 -1 반환
int top(Node* head);

int main(void) {
    Node* stack = NULL;

    push(&stack, 1);
    pop(&stack);
    push(&stack, 2);
    push(&stack, 3);
    push(&stack, 4);
    push(&stack, 5);
    pop(&stack);
    pop(&stack);

    printf("size: %d\n", size(stack));
    printf("top: %d\n", top(stack));

    while (!empty(stack)) {
        printf("pop: %d\n", pop(&stack));
    }

    return 0;
}