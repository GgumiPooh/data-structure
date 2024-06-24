#include "linked-list.h"

// 함수원형 (function signiture)
Node* create_node(int data){
    Node* p = (Node*)malloc(sizeof(Node));

    if(p == NULL)
        return NULL;
    (*p).data = data;  // p -> data 와 같음.
    p-> next = NULL; 
    return p;
}

int append_node(Node** head, int data) {
    if (*head == NULL)
        return 0;

    Node* newNode = create_node(data);
    newNode->next = *head;
    (*head) = newNode; 
    return 1;
}

int insert_node(Node** head, int data, int position) {
    Node* newNode = create_node(data);

    // + 새 노드 생성 실패 체크 후 실패코드 0 반환
    if (newNode == NULL)
        return 0;

    if (position == 0) {
        newNode->next = *head;
        *head = newNode;
        return 1;
    }
    
    Node* curNode = *head;
    Node* prevNode = *head;
    
    for(int i = 0; i < position; ++i) {
        if(curNode == NULL)
            return 0;

        prevNode = curNode;
        curNode = curNode->next;
    }

    if (curNode == NULL)
        return 0;
    prevNode->next = newNode;
    newNode->next = curNode;
    return 1;
}

int delete_node(Node** head, int position) {
    if (position == 0) {
        if (*head == NULL)
            return 0;

        Node* firstNode = *head;
        *head = (**head).next;        
        printf("Deallocated Node \n");
        free(firstNode);
        return 1;
    }
    
    Node* curNode = *head;
    Node* prevNode = *head;

    for(int i = 0; i < position; ++i){
        if(curNode == NULL)
            return 0;

        prevNode = curNode;
        curNode = curNode->next;
    }  

    if (curNode == NULL)
        return 0;
    prevNode->next = curNode->next;
    printf("Deallocated Node \n");
    free(curNode);

    // + 최종적으로 성공했을 때 1 반환
    return 1;
}


void print_list(Node* head) {
    for (int i = 0; head != NULL; ++i, head = head->next) {
        printf("%d번째 노드 데이터: %d \n", i, head->data);
    }
}

int free_list(Node** head){
    // 길이가 0일 때
    if (*head != NULL && (**head).next == NULL) {
        printf("Deallocated Node \n");
        free(*head);
        
        // + 122번 째 라인이 실행된 후에 return 1; 이 실행되어야 함
        // - return 1;
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
        
        // + 122번 째 라인이 실행된 후에 return 1; 이 실행되어야 함
        // - return 1;
    }

    *head = NULL;
    return 1; // + 122번 째 라인이 실행된 후에 return 1; 이 실행되어야 함
}