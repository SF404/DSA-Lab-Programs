// -----------Program to find minimum and maximum element of Array-------------
#include <stdio.h>
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
    int min = *arr, max = *arr;
    for (int i = 1; i < n; i++)
    {
        if (*(arr + i) > max) max = *(arr + i);
        if (*(arr + i) < min) min = *(arr + i);
    }
    printf("Maximum element of Array: %d\nMinimum element of Array: %d", max, min);

    return 0;
}