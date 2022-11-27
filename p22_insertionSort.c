#include <stdio.h>
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insertionSort(int arr[], int n)
{
    int key, j, i;
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        key = arr[i];
        while (key < arr[j] && j >= 0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int arr[] = {1, 6, 2, 4, 2, 9, 3};
    int n = 7;
    printf("Array Before Sort: ");
    printArr(arr, n);
    insertionSort(arr, n);
    printf("Array After  Sort: ");
    printArr(arr, n);
    return 0;
}