// ---------Program to demonistrate tail and Non-tail Recursion-----------
#include <stdio.h>
int tailRecursion(int n)
{
    if (n < 1)
        return 0;
    return 1 + tailRecursion(n - 1);
}
int nonTailRecursion(int n)
{
    if (n < 1)
        return 1;
    int c = 1 + tailRecursion(n - 1);
    c *= 2;
    return c;
}
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    printf("Tail: %d \n", tailRecursion(n));
    printf("Non-Tail: %d ", nonTailRecursion(n));
    return 0;
}