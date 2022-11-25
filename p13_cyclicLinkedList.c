// -----------------Program to construct Cyclic Linked List-------------
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct node
{
    int data;
    bool flag;
    struct node *next;
};
void PrintList(struct node *head) // Function to print Linked List
{
    while (head != NULL)
    {
        printf("[ %d | %d ] ---> ", head->data, head->next);
        head = head->next;
    }
    printf("\n");
}
struct node *createNode(int data) // Function to create node
{
    struct node *tempNode = (struct node *)malloc(sizeof(struct node));
    tempNode->next = NULL;
    tempNode->data = data;
    tempNode->flag = 0;
    return tempNode;
}
struct node *AppendNode(struct node *head, int data) // Function to append node
{
    struct node *tempNode = createNode(data), *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = tempNode;
    return head;
}
// ------Cycle Decetion using Slow and Fast Pointers-------
bool detectCycle(struct node *head)
{
    struct node *slow = head, *fast = head;
    int i = 0;
    while (slow && fast && fast->next)
    {
        slow = slow->next;
        i++;
        fast = fast->next->next;
        if (slow == fast)
        {
            printf("Cycle Deceted using slow And Fast\n");
            return 1;
        }
    }
    printf("Cucle Not Found\n");
    return 0;
}
//--------- Cycle Decetion using flag ------------
bool detectCycleFlag(struct node *head)
{
    int i = 0;
    while (head != NULL)
    {
        i++;
        if (head->flag == 1)
        {
            printf("Cycle Deceted using Flag \n");
            return 1;
        }
        head = head->next;
        head->flag = 1;
    }
    printf("Cycle Not Found\n");
    return 0;
}
int main()
{
    struct node *head = createNode(10);
    head = AppendNode(head, 20);
    head = AppendNode(head, 30);
    head = AppendNode(head, 40);
    head = AppendNode(head, 50);
    PrintList(head);
    head->next->next->next->next = head->next;
    detectCycleFlag(head);
    detectCycle(head);

    return 0;
}