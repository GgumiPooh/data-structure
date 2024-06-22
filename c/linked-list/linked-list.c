#include "linked-list.h"

// 함수원형 (function signiture)
Node* create_node(int data){
    Node* p = (Node*)malloc(sizeof(Node));
    (*p).data = data;  // p -> data 와 같음.
    p-> next = NULL; 
    return p;
}

void append_node(Node** head, int data) {
    if (*head == NULL)
        return;

    Node* newNode = create_node(data);
    newNode->next = *head;
    (*head) = newNode; 
    //리스트 맨앞에 추가..? 맨 앞에 추가하면 됩니다요
    
    /*
        Node* newNode = create_node(data);
        (*tail)->next = newNode;
        *tail = newNode;     
    */
}

void insert_node(Node** head, int data, int position) {
    Node* newNode = create_node(data);

    if (position == 0) {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    
    Node* curNode = *head;
    Node* prevNode = *head;
    
    for(int i = 0; i < position; ++i) {
        if(curNode == NULL)
            return;

        prevNode = curNode;
        curNode = curNode->next;
    }

    if (curNode == NULL)
        return;
    prevNode->next = newNode;
    newNode->next = curNode;
}

void delete_node(Node** head, int position) {
    if (position == 0) {
        if (*head == NULL)
            return;

        Node* firstNode = *head;
        *head = (**head).next;        
        printf("Deallocated Node \n");
        free(firstNode);
        return;
    }
    
    Node* curNode = *head;
    Node* prevNode = *head;

    for(int i = 0; i < position; ++i){
        if(curNode == NULL)
            return;

        prevNode = curNode;
        curNode = curNode->next;
    }  

    if (curNode == NULL)
        return;
    prevNode->next = curNode->next;
    printf("Deallocated Node \n");
    free(curNode);
}


void print_list(Node* head) {
    for (int i = 0; head != NULL; ++i, head = head->next) {
        printf("%d번째 노드 데이터: %d \n", i, head->data);
    }
}

void free_list(Node** head){
    // 길이가 0일 때
    if (*head != NULL && (**head).next == NULL) {
        printf("Deallocated Node \n");
        free(*head);
    } 
    // 길이가 1이상일 때
    else {
        Node* prevNode = *head;
        Node* curNode = (**head).next;

        while (curNode != NULL){
            printf("Deallocated Node \n");
            free(prevNode);
            prevNode = curNode;
            curNode = curNode->next;
        }
        free(prevNode);
        printf("Deallocated Node \n");
    }

    *head = NULL;
}