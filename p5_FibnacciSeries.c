// ----------------Program to Print Fibnaci series-------------
#include <stdio.h>
void printFib(int n)
{
    int t1 = 0, t2 = 1, nextTerm = 0;
    while (nextTerm <= n)
    {
        printf("%d ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
}
int main()
{
    int n;
    printf("Enter Upper limit of Fibnacci Elements: ");
    scanf("%d", &n);
    printFib(n);
    return 0;
}