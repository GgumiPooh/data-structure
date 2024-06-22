#include "linked-list.h"
// 함수원형 (function signiture)
Node* create_node(int data){
    Node* p = (Node*)malloc(sizeof(Node));
    (*p).data = data;  // p -> data 와 같음.
    p-> next = NULL; 
    return p;
}

void append_node(Node** tail, int data) {
    
    // Node* newNode = create_node(data);
    // newNode->next = *head;
    // (*head) = newNode; 
    //리스트 맨앞에 추가..? 
    Node* newNode = create_node(data);
    (*tail)->next = newNode;
    *tail = newNode;     
}

void insert_node(Node* head, Node** tail, int data, int position) {
    Node* curNode = head;
    
    for(int i = 0; i < position; ++i) {
        if(curNode != NULL) {
            curNode = curNode->next;
        }
    }
    if(curNode != NULL) {
        Node* newNode = create_node(data);

        newNode->next = curNode->next;
        curNode->next = newNode;
        if(curNode == *tail){
            *tail = newNode;

        }
    }
}

void delete_node(Node** head, int position) {
    Node* curNode = head;

    for(int i = 0; i < position; ++i){
        if(curNode != NULL){
            curNode = curNode->next;
        }
    }  
}


void print_list(Node* head) {

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
    *head = NULL;
}