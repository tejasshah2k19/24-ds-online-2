#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *addNode(struct node *root, int data) // root:50,45  root:30,45 root:NULL,45
{
    if (root == NULL)
    {
        root = malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    else if (data > root->data) // 45 > 50  45 > 30
    {
        // right
        root->right = addNode(root->right, data);
        // 30->right = addNode(NULL,45); 45
    }
    else if (data < root->data) // 45 < 50
    {
        // left
        root->left = addNode(root->left, data);
        // 50->left = addNode(30,45);
    }
    return root;
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf(" %d", root->data);
        inOrder(root->right);
    }
}

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf(" %d", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf(" %d", root->data);
    }
}

int main()
{

    struct node *root = NULL;

    root = addNode(root, 50);
    addNode(root, 70);
    addNode(root, 30);
    addNode(root, 45);
    addNode(root,20);

    printf("\n InOrder : ");
    inOrder(root);

    printf("\n PreOrder : ");
    preOrder(root);

    printf("\n PostOrder : ");
    postOrder(root);

    return 0;
}