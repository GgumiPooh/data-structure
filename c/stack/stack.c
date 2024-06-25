
#include "stack.h"


Node* create_node(int data){
    Node* p = (Node*)malloc(sizeof(Node));

    if(p == NULL)
        return NULL;
    (*p).data = data;  // p -> data 와 같음.
    p-> next = NULL; 
    return p;
}

int push(Node** head, int data) {

    Node* newNode = create_node(data);
    newNode->next = *head;
    *head = newNode; 
    if (*head == NULL)
        return -1;
    return 0;
}

int pop(Node** head) {
    if (*head == NULL)
         return -1;
    int p = 0;
    p = (*head)->data;
    Node* firstNode = *head;
    *head = (**head).next;     
    free(firstNode);
    return p;
}

int size(Node* head){
    if (head == NULL)
            return 0;
    int p = 1;
    for(;head->next != NULL;p++){
        head = head->next;
    }
    return p;
}

int empty(Node* head) {
    if (head == NULL)
        return 1;
    else
        return 0;
}

int top(Node* head){
    if (head == NULL)
            return -1;
    return head->data;
}
