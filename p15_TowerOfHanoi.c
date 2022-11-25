// ---------------Program to implement Tower of Hanoi------------
#include <stdio.h>
#include <stdlib.h>
int cnt=0;
void TOH(char l, char m, char r, int n) // Recursive Function
{
    cnt++;
    if (n <= 0)
        return;
    TOH(l, r, m, n - 1);
    printf("--->  %c - %c\n", l, r);
    TOH(m, l, r, n - 1);
}
int main()
{
    int n;
    printf("Enter the Size of Tower: ");
    scanf("%d", &n);
    TOH('L', 'M', 'R', n);
    printf("Number of Calls: %d", cnt);
    return 0;
}