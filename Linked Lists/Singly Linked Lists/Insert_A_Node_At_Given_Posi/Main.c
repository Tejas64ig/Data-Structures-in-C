#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

// create node
struct node* getnode(int val) {
    struct node* p = (struct node*)malloc(sizeof(struct node));
    if (p == NULL) {
        printf("Memory not available\n");
        return NULL;
    }
    p->data = val;
    p->next = NULL;
    return p;
}

// insert at start
struct node* insertAtStart(struct node* head, int val) {
    struct node* p = getnode(val);
    p->next = head;
    return p;
}

// insert at end
struct node* insertAtEnd(struct node* head, int val) {
    struct node* p = getnode(val);
    if (head == NULL) {
        return p;
    }
    struct node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = p;
    return head;
}

// insert at middle 
struct node* insertAtMiddle(struct node* head, int pos, int val) {
    if (pos <= 1 || head == NULL)
        return insertAtStart(head, val);

    struct node* p = getnode(val);
    struct node* temp = head;
    int count = 1;

    while (count < pos - 1 && temp->next != NULL) {
        temp = temp->next;
        count++;
    }

    p->next = temp->next;
    temp->next = p;

    return head;
}

// display
void display(struct node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}

// main
int main() {
    struct node* head = NULL;

    head = insertAtStart(head, 10);
    head = insertAtEnd(head, 30);
    head = insertAtMiddle(head, 2, 20);

    display(head);
    return 0;
}
