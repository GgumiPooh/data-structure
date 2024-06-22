#include "stdio.h"
#include "linked-list.h"

int main(void) {
    Node* head = create_node(1);
    Node* tail = head;
    append_node(&tail, 2);
    append_node(&tail, 3);
    append_node(&tail, 4);
    append_node(&tail, 5);
    insert_node(head, &tail, 6, 5);
    insert_node(head, &tail, 6, 4);
    free_list(&head);

    return 0;
}
