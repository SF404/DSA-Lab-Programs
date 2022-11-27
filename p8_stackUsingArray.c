// -------------Stack using array-------------
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct stack
{
    int size, top, *arr;
};
bool isEmpty(struct stack *s)
{
    return (s->top < 0);
}
bool isFull(struct stack *s)
{
    return (s->top == s->size - 1);
}
void push(struct stack *s, int data)
{
    if (!isFull(s))
    {
        s->top++;
        s->arr[s->top] = data;
        printf("%d Pushed Sucessfully\n", s->arr[s->top]);
    }
    else
        printf("Can't push, Stack is Full!\n");
}
int pop(struct stack *s)
{
    if (!isEmpty(s))
    {
        int poped = s->arr[s->top];
        s->top--;
        printf("%d is poped Sucessfully\n", poped);
    }
    else
        printf("Can't pop, Stack is empty\n");
}
void showStack(struct stack *s)
{
    int n = s->size;
    printf("\n");
    while (n--)
    {
        (n > s->top) ? printf("    |   __   |\n") : printf("    |   %d   |   \n", (*s).arr[n]);
    }
    printf("    |________|   \n");
}

int main()
{
    int n;
    printf("Enter size of Stack: ");
    scanf("%d", &n);
    struct stack *s;
    s = (struct stack *)malloc(sizeof(struct stack));
    s->top = -1;
    s->size = n;
    s->arr = (int *)malloc(s->size * sizeof(int));
    push(s, 10);
    push(s, 30);
    push(s, 40);
    push(s, 16);
    push(s, 77);
    push(s, 55);
    showStack(s);
    push(s, 33);
    // printf("%d", s->arr[0]);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    showStack(s);
    // --------------------------------
    return 0;
}