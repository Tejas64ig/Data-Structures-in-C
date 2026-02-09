
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

// create node
struct node* getNode(int val) {
    struct node* p = (struct node*)malloc(sizeof(struct node));

    if (p == NULL) {
        printf("Not enough memory\n");
        return NULL;
    }

    p->data = val;
    p->left = NULL;
    p->right = NULL;

    return p;
}

// INORDER traversal
void Inorder(struct node* root) {
    if (root != NULL) {
        Inorder(root->left);
        printf("%d ", root->data);
        Inorder(root->right);
    }
}

// PREORDER traversal
void Preorder(struct node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        Preorder(root->left);
        Preorder(root->right);
    }
}

// POSTORDER traversal
void Postorder(struct node* root) {
    if (root != NULL) {
        Postorder(root->left);
        Postorder(root->right);
        printf("%d ", root->data);
    }
}

int main() {

    struct node* root = NULL;

    root = getNode(10);
    root->right = getNode(20);
    root->right->right = getNode(30);

    printf("Inorder Traversal: ");
    Inorder(root);

    printf("\nPreorder Traversal: ");
    Preorder(root);

    printf("\nPostorder Traversal: ");
    Postorder(root);

    return 0;
}
