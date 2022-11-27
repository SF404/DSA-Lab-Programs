// ---------Program to swap two numbers-----------
#include <stdio.h>
void swap(int *a, int *b) // swap Function
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b; // variable declaration
    printf("Enter any two Numbers(give a space Between them): ");
    scanf("%d%d", &a, &b); // taking input
    printf("Number Before Swap: a=%d, b=%d\n", a, b);
    swap(&a, &b); // calling swap function (call by refrence)
    printf("Number After  Swap: a=%d, b=%d\n", a, b);
    return 0;
}