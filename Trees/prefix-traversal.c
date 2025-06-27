#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} tree;

tree *create_node(int val)
{
    tree *n = (tree *)malloc(sizeof(tree));
    n->data = val;
    n->left = NULL;
    n->right = NULL;

    return n;
}

void prefix(tree *root)
{

    if (root != NULL)
    {
        printf("%d ", root->data);
        prefix(root->left);
        prefix(root->right);
    }
}

int main()
{

    tree *p = create_node(4);
    tree *p1 = create_node(5);
    tree *p2 = create_node(42);
    tree *p3 = create_node(13);
    tree *p4 = create_node(40);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    prefix(p);

    return 0;
}