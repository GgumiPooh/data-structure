#include "stdio.h"
#include "linked-list.h"

int main(void) {
    Node* head = create_node(3);
    append_node(&head, 5);
    free_list(&head);

    return 0;
}
