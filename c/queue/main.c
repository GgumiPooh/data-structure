#include "queue.h"
// #include "queue.c"


int main(void) {
    Node* head = NULL, * tail = NULL;

    push(&head, &tail, 1);
    push(&head, &tail, 2);
    push(&head, &tail, 3);
    pop(&head, &tail);
    push(&head, &tail, 4);
    pop(&head, &tail);
    push(&head, &tail, 5);
    printf("%d\n", size(head));
    printf("%d\n", front(head));
    printf("%d\n", back(tail));


    print_queue(head);
    free_queue(&head, &tail);

    return 0;
}