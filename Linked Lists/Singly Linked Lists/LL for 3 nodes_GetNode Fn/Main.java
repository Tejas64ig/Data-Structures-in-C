#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* getnode(int val) {
    struct node* p;

    p = (struct node*)malloc(sizeof(struct node));

    if (p == NULL) {
        printf("Not enough memory\n");
        return NULL;
    }

    p->data = val;
    p->next = NULL;

    return p;
}

void display(struct node* p) {
    if (p == NULL) {
        return;
    }

    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
}

int main() {
    struct node* start = NULL;

    start = getnode(10);
    start->next = getnode(20);

    display(start);
    return 0;
}
