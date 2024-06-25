#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "stdio.h"
#include "stdlib.h"

// 노드 구조체 정의
typedef struct Node {
    int data;          // 노드가 저장하는 데이터
    struct Node* next; // 다음 노드를 가리키는 포인터
} Node;

// 함수 선언리스트의 

/**
 * @brief 주어진 데이터를 포함하는 새 노드를 생성합니다.
 * 
 * @param data 새 노드에 저장할 데이터
 * @return Node* 새로 생성된 노드에 대한 포인터
 */
Node* create_node(int data);

/**
 * @brief 리스트의 맨 앞에 새 노드를 추가합니다.
 * 
 * @param head 리스트의 헤드에 대한 포인터
 * @param data 추가할 노드에 저장할 데이터
 */
int append_node(Node** head, int data);

/**
 * @brief 리스트의 특정 위치에 새 노드를 삽입합니다.
 * 
 * @param head 리스트의 헤드에 대한 포인터
 * @param data 삽입할 노드에 저장할 데이터
 * @param position 삽입할 위치 (0부터 시작)
 */
int insert_node(Node** head, int data, int position);

/**
 * @brief 리스트의 특정 위치에 있는 노드를 삭제합니다.
 * 
 * @param 리스트의 헤드에 대한 포인터
 * @param position 삭제할 노드의 위치 (0부터 시작)
 */
int delete_node(Node** head, int position);

/**
 * @brief 리스트의 모든 노드를 출력합니다.
 * 
 * @param 리스트의 헤드
 */
void print_list(Node* head);

/**
 * @brief 리스트의 모든 노드를 해제하여 메모리 누수를 방지합니다.
 * 
 * @param head 리스트의 헤드에 대한 포인터
 */
int free_list(Node** head);

#endif LINKED_LIST_H
