// ---------------Program to implement multiple stack sing Single Array----------
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// -------Stack Push Function-------
void push(int *s, int n, int m, int t[], int i, int data)
{
    if (t[i] == ((i + 1) * (n / m)) - 1)
    {
        printf("Can't push, Stack is Full!\n");
        return;
    }
    else
    {
        t[i]++;
        s[t[i]] = data;
        printf("%d is pushed Sucessfully at index %d\n", data, t[i]);
    }
}
// --------Stack pop Function------
void pop(int *s, int n, int m, int t[], int i)
{
    if (t[i] == (i) * (n / m) - 1)
    {
        printf("Can't pop, Stack is Empty!\n");
        return;
    }
    else
    {
        int x = s[t[i]];
        t[i]--;
        printf("%d is popped Sucessfully from index %d\n", x, t[i] + 1);
    }
}
// ------------------------------------
int main()
{
    int n, m, top = -1;
    printf("Enter size of Stack And Partition respectively: ");
    scanf("%d %d", &n, &m);
    int s[n], t[m];
    for (int i = 0; i < m; i++)
    {
        t[i] = i * (n / m) - 1;
    }

    push(s, n, m, t, 0, 20);
    push(s, n, m, t, 0, 20);
    push(s, n, m, t, 0, 20);
    pop(s, n, m, t, 0);
    pop(s, n, m, t, 0);
    pop(s, n, m, t, 0);
    pop(s, n, m, t, 0);
    push(s, n, m, t, 0, 20);
    push(s, n, m, t, 0, 20);
    push(s, n, m, t, 1, 20);
    push(s, n, m, t, 1, 20);
    push(s, n, m, t, 1, 20);
    push(s, n, m, t, 1, 20);
    push(s, n, m, t, 1, 20);
    push(s, n, m, t, 1, 20);
    push(s, n, m, t, 2, 20);
    push(s, n, m, t, 2, 20);
    push(s, n, m, t, 2, 20);
    push(s, n, m, t, 2, 20);
    return 0;
}