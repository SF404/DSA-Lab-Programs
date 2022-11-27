// ----------Program to create linkedlist and insert and delete functions---------
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct node
{
    int data;
    struct node *next;
};
void printLinkedList(struct node *ptr) // Function For Printing Linked list
{
    printf("\nLinked List: \n\n");
    while (ptr != NULL)
    {
        printf("[ %d | %d ] ----> ", ptr->data, ptr->next);
        ptr = ptr->next;
    }
    printf("\n\n");
}
struct node *createNode(int data) // Function to create a node
{
    struct node *tempNode = (struct node *)malloc(sizeof(struct node));
    tempNode->data = data;
    tempNode->next = NULL;
    return tempNode;
}
// ---------------Node Insertion-------------------------
struct node *insertNodeAtEnd(struct node *head, int data) // Function TO inxert Node At End of Linked List
{
    struct node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = createNode(data);
    return head;
}
struct node *insertNodeAtStart(struct node *head, int data) // Function to insert node at Begining of Linked List
{
    struct node *tempNode = createNode(data);
    tempNode->next = head;
    head = tempNode;
    return head;
}
struct node *insertNodeBeforeData(struct node *head, int data, int dataY) // Function to insert node Before some data
{
    struct node *p = head, *q = head->next;
    while (q->data != dataY)
    {
        p = p->next;
        q = q->next;
    }
    struct node *tempNode = createNode(data);
    tempNode->next = q;
    p->next = tempNode;
    return head;
}
// -----------------------------------------
// ------------Node Deletion----------------
struct node *deleteNodeAtStart(struct node *head) // Function to delete node from Begining of Linked List
{
    struct node *tempNode = head;
    head = head->next;
    free(tempNode);
    return head;
}
struct node *deleteNodeContainingSomeData(struct node *head, int data) // Function to delete node containing some Particular Data
{
    struct node *p = head, *q = head->next;
    while (q->data != data)
    {
        q = q->next;
        p = p->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
struct node *deleteNodeAtEnd(struct node *head) // Function to delete Node from the end of the linked list
{
    struct node *p = head, *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
// ----------------------------------------
void FindNode(struct node *ptr, int x) // Function to find node containing some particular data
{
    while (ptr->data != x && ptr != NULL)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        printf("Data '%d' is found at '%d'\n", x, ptr);
    }
    else
        printf("Node not found!!!\n");
}
struct node *reversingLinkedList(struct node *head) // Function to reverse Linked List
{
    struct node *pre = NULL, *curr = head, *next;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = pre;
        pre = curr;
        curr = next;
        // nex=nex->next;
    }
    head = pre;
    return head;
}
// ------------------------------------------
int main()
{
    struct node *head = createNode(20);
    insertNodeAtEnd(head, 9);
    head = insertNodeAtStart(head, 5);
    head = insertNodeAtStart(head, 99);
    head = insertNodeBeforeData(head, 34, 9);
    head = insertNodeBeforeData(head, 39, 34);
    // head = printLinkedList(head);
    head = deleteNodeContainingSomeData(head, 5);
    // head = deleteNodeAtStart(head);
    // head = deleteNodeAtEnd(head);
    printLinkedList(head);
    FindNode(head, 39);
    head = reversingLinkedList(head);
    printLinkedList(head);

    return 0;
}