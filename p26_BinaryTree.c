#include <stdio.h>
#include <stdlib.h>
int max(int a, int b)
{
    return (a > b) ? a : b;
}
struct node
{
    struct node *left;
    int data;
    struct node *right;
};
struct node *createNode(int data)
{
    struct node *tempNode = (struct node *)malloc(sizeof(struct node));
    tempNode->data = data;
    tempNode->left = NULL;
    tempNode->right = NULL;
    return tempNode;
}
void insertNode(struct node *root, int data)
{
    struct node *newNode = createNode(data);
    struct node *prev;
    while (root != NULL)
    {
        prev = root;
        if (root->data == data)
        {
            printf("Can't Insert, Data Already Present\n");
            return;
        }
        else if (root->data < data)
            root = root->right;
        else
            root = root->left;
    }
    if (data > prev->data)
        prev->right = newNode;
    else
        prev->left = newNode;
    printf("Node Inserted Successfully\n");
}

void preOrderTraversal(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}
void postOrderTraversal(struct node *root)
{
    if (root != NULL)
    {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        printf("%d ", root->data);
    }
}
void inOrderTraversal(struct node *root)
{
    if (root != NULL)
    {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}
int CountLeafNodes(struct node *root)
{
    struct node *ptr = root;
    if (root == NULL)
        return 0;
    if (ptr->left == NULL && ptr->right == NULL)
    {
        return 1;
    }
    else
        return CountLeafNodes(ptr->left) + CountLeafNodes(ptr->right);
}
int CountTotalNodes(struct node *root)
{
    if (root == NULL)
        return 0;
    return 1 + CountTotalNodes(root->left) + CountTotalNodes(root->right);
}
int heightOfTree(struct node *root)
{
    if (root == 0)
    {
        return 0;
    }
    else
    {
        return max(heightOfTree(root->left), heightOfTree(root->right) + 1);
    }
}

int main()
{
    struct node *root = createNode(2);
    insertNode(root, 4);
    insertNode(root, 3);
    insertNode(root, 1);
    insertNode(root, 6);
    insertNode(root, 5);
    printf(" Pre Order Traversal: ");
    preOrderTraversal(root);
    printf("\nPost Order Traversal: ");
    postOrderTraversal(root);
    printf("\n  In Order Traversal: ");
    inOrderTraversal(root);
    printf("\nHeight of the Tree: %d", heightOfTree(root));
    printf("\nNo.  of Leaf Nodes: %d", CountLeafNodes(root));
    printf("\nNo.  of Total Nodes: %d", CountTotalNodes(root));
    return 0;
}