// --------Program to find Factorial of a Number-------
#include <stdio.h>
long long int fact(int n)
{
    if (n < 2)
        return 1;           // Base Condition
    return n * fact(n - 1); // Recursive Call(Tail Recursion)
}
int main()
{
    int n;
    scanf("%d", &n);                                                     // Input Number
    (n < 1) ? printf("0") : printf("Factorial of %d: %lli", n, fact(n)); // Print Statement
    return 0;
}