#include "stdio.h"
#include "linked-list.h"

/*
    과제 1: 
        malloc함수는 동적할당이 성공 했을 때 void pointer를 반환한다.
        하지만 메모리가 부족한 경우 malloc함수는 NULL을 반환하기도 한다.
        출처: https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/malloc?view=msvc-170

        NULL은 숫자 0을 의미하기도 하며, 주소 0을 의미하기도 한다.
        즉, 허락되지 않은 0번 주소에 접근하는 것(= dereferencing)은 프로그램이 죽는 원인이 된다.

        그러나 지금 create_node는 malloc 함수의 리턴값이 NULL인지 체크하지 않고 dereferencing을 하고 있다😭😭
        create_node 함수에서 malloc 호출이 실패했을 때 NULL을 반환하도록 수정해봅시다아아앙..😎

        참고: dereferencing은 아래와 같은 operations들을 의미한단다ㅏㅏㅏ
        1. *p (* 연산자를 사용한 dereferencing)
        2. p[0] (배열의 첫 번째 원소에 접근하는 dereferencing)
        3. p->somedata (구조체의 멤버에 접근하는 dereferencing)
*/

/*
    과제 2: 
        linked-list.h 헤더파일에서 다음 함수들의 반환값을 void 대신에 int 타입으로 수정해볼 것
        append_node, insert_node, delete_node, free_list  
        
        이후에 함수의 반환값으로 성공 여부를 반환하도록 수정해보자!!!🤯
        함수 실행이 성공했을 때는 0이 아닌 수를 반환, 실패 했을 때는 0을 반환하도록 해보거라
*/

/*
    과제 3:
        먼저 main 함수에서 int length = 0; 으로 변수를 선언 및 초기화해두자.

        main 함수에서 create_node, append_node, insert_node, delete_node, free_list 함수들을 호출하고 있다.
        
        함수 호출시 반환값을 받아서 성공 여부를 확인하고, 
        성공했을 때 length를 변경하도록 수정해보자😎

        delete_node와 free_list 함수의 경우 성공 시 length 값을 감소시키고,
        append_node와 insert_node 함수의 경우 성공 시 length 값을 증가시키도록 수정하면 된다😛
*/


int main(void) {
    int length = 0;
    Node* head = create_node(5);
    
    
    if(append_node(&head, 4) != 0){
        printf("success+\n");
        length++;
    }
        else{
            printf("fail\n");
            
        }
            
    if(append_node(&head, 3) != 0){
        printf("success+\n");
        length++;
    }
        else{
            printf("fail\n");
            
        }
    if(append_node(&head, 7) != 0){
        printf("success+\n");
        length++;
    }
        
        else{
            printf("fail\n");
     
        }
    if(insert_node(&head, 6, 3) != 0){
        printf("success+\n");
        length++;
    }
        else{
            printf("fail\n");
          
        }
    
    if(delete_node(&head, 0) != 0){
        printf("success-\n");
        length--;
    }
        else{
            printf("fail\n");
         
        }
    
    print_list(head);
    if(free_list(&head) != 0){
        printf("success-\n");
        length--;
    }
        else{
            printf("fail\n");}
         

    printf("%d", length);
    return 0;

}