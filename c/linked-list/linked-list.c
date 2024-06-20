#include "linked-list.h"
// 함수원형 (function signiture)
Node* create_node(int data){
    Node* p = (Node*)malloc(sizeof(Node));
    (*p).data = data;  // p -> data 와 같음.
    p-> next = '\0'; 
    return p;
}

void append_node(Node** head, int data){
    
    Node* newNode = create_node(data);
    (*newNode).next = *head;
    (*head) = newNode;
}

void free_list(Node** head){
    Node* prevNode = *head;
    Node* curNode = (**head).next;

    while (curNode != '\0'){
        free(prevNode);
        prevNode = curNode;
        curNode = curNode->next;
    }

    free(prevNode);
    *head = '\0';
}