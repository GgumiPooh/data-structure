#include "queue.h"
#include "stdlib.h"


Node* create_node(int data){
    Node* p = (Node*)malloc(sizeof(Node));

    if(p == NULL)
        return NULL;
    p->data = data;
    p->next = NULL; 
    p->prev = NULL;
    
    return p;
}

// push X: 정수 X를 큐에 넣고 성공여부를 반환한다. 성공했을 경우 1, 실패했을 경우 0을 반환한다.
int push(Node** headp, Node** tailp, int data) {
    Node* newnode = create_node(data);
    if(newnode == NULL)
        return 0;
    if(*headp == NULL){
        *headp = newnode;
        *tailp = newnode;
        return 1;
    }
    else{
        newnode->next = *headp;
        (*headp)->prev = newnode;
        *headp = newnode;
        return 1;
    }
}

// pop: 큐에서 가장 뒤에 있는 정수를 빼고 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
int pop(Node** headp, Node** tailp) {
    if(headp == NULL)
        return -1;
    Node* lastnode = *tailp;
    int p = lastnode->data;
    *tailp = (*tailp)->prev;
    (*tailp)->next = NULL;
    free(lastnode);
    return p;
}

// size: 큐에 들어있는 정수의 개수를 출력한다.
int size(Node* head) {
    int l = 0;
    while(head != NULL) {
        ++l;
        head = head->next;
    }     
    return l; 
}

// empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
int empty(Node* head){
    if(head == NULL)
        return 1;
    else
        return 0;

}

// front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
int front(Node* head) {
    if(head == NULL)
        return -1;
    return head->data;

}

// back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
int back(Node* tail) {
    if(tail == NULL)
        return -1;
    return tail->data;
}

// print_queue: 큐에 들어있는 정수를 출력한다.
void print_queue(Node* head) {
    while(head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }      
}

// free_queue: 큐에 들어있는 모든 노드를 할당 해제하고 큐를 삭제한다.
void free_queue(Node** head, Node** tail) {
    if(*head==NULL)
        return;
    
    else{
        Node* firstnode = *head;
        for(;(*head)->next!=NULL;) {
            *head = (*head)->next;
            free(*head);
        }
        *head = NULL;
        *tail = NULL;
        free(firstnode);
        
    }
}