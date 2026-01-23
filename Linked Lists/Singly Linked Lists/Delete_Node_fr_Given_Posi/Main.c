#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* deleteAtPosition(struct node* head, int pos) {

    struct node* temp = head;
    struct node* p = NULL;
    int i;

    // empty list
    if (head == NULL) {
        printf("List is empty\n");
        return head;
    }

    // delete first node
    if (pos == 1) {
        head = head->next;
        free(temp);
        return head;
    }

    // traverse till pos-1
    for (i = 1; i < pos - 1 && temp->next != NULL; i++) {
        temp = temp->next;
    }

    // invalid position
    if (temp->next == NULL) {
        printf("Invalid position\n");
        return head;
    }

    // delete middle or last
    p = temp->next;
    temp->next = p->next;
    free(p);

    return head;
}
