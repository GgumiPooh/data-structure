#include <stdio.h>

typedef struct {
    int data;
    Node* next;
} Node;

int create_note(int data);

// push X: 정수 X를 큐에 넣고 성공여부를 반환한다. 성공했을 경우 1, 실패했을 경우 0을 반환한다.
int push(Node** headp, Node** tailp, int data);

// pop: 큐에서 가장 앞에 있는 정수를 빼고 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
int pop(Node** headp, Node** tailp);

// size: 큐에 들어있는 정수의 개수를 출력한다.
int size(Node* head);

// empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
int empty(Node* head);

// front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
int front(Node* head);

// back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
int back(Node* tail);

// print_queue: 큐에 들어있는 정수를 출력한다.
void print_queue(Node* head);

// free_queue: 큐에 들어있는 모든 노드를 할당 해제하고 큐를 삭제한다.
void free_queue(Node** head, Node** tail);

int main(void) {
    Node* head = NULL, * tail = NULL;

    push(&head, &tail, 1);
    push(&head, &tail, 2);
    push(&head, &tail, 3);
    pop(&head, &tail);
    push(&head, &tail, 4);
    pop(&head, &tail);
    push(&head, &tail, 5);

    print_queue(head);
    free_queue(&head, &tail);

    return 0;
}