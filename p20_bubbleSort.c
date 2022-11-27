#include <stdio.h>
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[] = {4, 2, 6, 1, 8, 5, 0};
    int n = 7;
    printf("Array Before Sort: ");
    printArr(arr, n);
    bubbleSort(arr, n);
    printf("Array After  Sort: ");
    printArr(arr, n);
    return 0;
}