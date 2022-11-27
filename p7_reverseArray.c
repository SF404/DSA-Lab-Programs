// -----------Program to reverse Array-----------
#include <stdio.h>
void reverseArray(int *arr, int n)
{
    int i = 0, j = n - 1, temp;
    while (i < j)
    {
        temp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = temp;
        i++;
        j--;
    }
}
int main()
{
    int n;
    printf("Enter size of Array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Array Elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }
    reverseArray(arr, n);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}