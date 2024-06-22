#include "stdio.h"
#include "linked-list.h"

int main(void) {
    Node* head = create_node(5);
    append_node(&head, 4);
    insert_node(&head, 6, 1);
    delete_node(&head, 1);
    
    print_list(head);

    free_list(&head);

    return 0;
}
