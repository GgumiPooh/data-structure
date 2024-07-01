#include "queue.h"
#include "stdlib.h"


Node* create_node(int data){
    Node* p = (Node*)malloc(sizeof(Node));

    if(p == NULL)
        return NULL;
    (*p).data = data;  // p -> data 와 같음.
    p-> next = NULL; 
    return p;
}


// push X: 정수 X를 큐에 넣고 성공여부를 반환한다. 성공했을 경우 1, 실패했을 경우 0을 반환한다.
int push(Node** headp, Node** tailp, int data) {
    Node* newnode = create_node(data);
    if(newnode == NULL)
        return 0;
    if(*headp==NULL){
        *headp = newnode;
    }
    else
        *tailp = newnode;
   for(;(*headp)->next != NULL;){
        *headp = (*headp)->next;
    }    
    (*headp)->next = *tailp;
    return 1;

}

// pop: 큐에서 가장 앞에 있는 정수를 빼고 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
int pop(Node** headp, Node** tailp) {
    if(*headp == NULL)
        return -1;
    Node* firstnode = *headp;
    int p = firstnode->data;
    *headp = (*headp)->next;
    free(firstnode);
    return p;
}
    
    

// // size: 큐에 들어있는 정수의 개수를 출력한다.
int size(Node* head) {
    if(head == NULL)
        return 0;
    int p = 1;
    while(head->next != NULL){
        head = head->next;
        p++;
    }
    return p;
}

// // empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
int empty(Node* head){
    if(head == 0)
        return 1;
    return 0;
}

// front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
int front(Node* head) {
    if(head==NULL)
        return -1;
    return head->data;
}

// back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
int back(Node* tail) {
    if(tail==NULL)
        return -1;
    return tail->next;
}

// print_queue: 큐에 들어있는 정수를 출력한다.
void print_queue(Node* head) {
    while(head->next != NULL){
        printf("&d", head->data);
        head = head->next;
    }    
}

// free_queue: 큐에 들어있는 모든 노드를 할당 해제하고 큐를 삭제한다.
void free_queue(Node** head, Node** tail) {
    Node* firstnode = *head;
    while(*head == *tail) {
        *head = (*head)->next;
        free(head);
    }
    free(firstnode);
}