// ----------Program to create double Linked List-----------
#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *pre;
    int data;
    struct node *next;
};
void printList(struct node *head) // Function to print Linked List
{
    struct node *ptr = head;
    printf("\nDouble Linked List: \n\n");
    while (ptr != NULL)
    {
        printf("[ %d | %d | %d ] ----> ", ptr->pre, ptr->data, ptr->next);
        ptr = ptr->next;
    }
    printf("\n\n");
}
struct node *createNode(int data) // Function to create node
{
    struct node *tempNode = (struct node *)malloc(sizeof(struct node));
    tempNode->pre = NULL;
    tempNode->data = data;
    tempNode->next = NULL;
    return tempNode;
}
// ---------------Insertion-------------------
struct node *insertAtStart(struct node *head, int data) // Functio to insert node At Begning
{
    struct node *tempNode = createNode(data);
    tempNode->next = head;
    head->pre = tempNode;
    head = tempNode;
    return head;
}
struct node *insertAtEnd(struct node *head, int data) // Function to insert node At the End
{
    struct node *tempNode = createNode(data), *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = tempNode;
    tempNode->pre = p;
    return head;
}
struct node *insertNodeBeforeData(struct node *head, int data, int dataY) // Function to insert node before some data
{
    struct node *p = head, *tempNode = createNode(data);
    while (p->data != dataY)
    {
        p = p->next;
    }
    p->pre->next = tempNode;
    tempNode->pre = p->pre;
    p->pre = tempNode;
    tempNode->next = p;
    return head;
}
// ----------Deletion----------
struct node *deleteNodeAtStart(struct node *head) // Fnction to delete node from the begning
{
    struct node *p = head;
    head = head->next;
    head->pre = NULL;
    free(p);
    return head;
}
struct node *deleteNodeAtEnd(struct node *head) // Function to delete node from the end
{
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->pre->next = NULL;
    free(p);
    return head;
}
struct node *deleteNodeAtSomeData(struct node *head, int dataY) // Function to delete node containing some data
{
    struct node *p = head;
    while (p->data != dataY)
    {
        p = p->next;
    }
    p->pre->next = p->next;
    free(p);
    return head;
}
// ----------------------------------
int main()
{
    struct node *head;
    head = createNode(22);
    head = insertAtStart(head, 23);
    head = insertAtStart(head, 293);
    head = insertAtEnd(head, 80);
    head = insertNodeBeforeData(head, 100, 22);
    head = deleteNodeAtStart(head);
    deleteNodeAtEnd(head);
    deleteNodeAtSomeData(head, 100);
    insertAtEnd(head, 300);
    printList(head);
    return 0;
}