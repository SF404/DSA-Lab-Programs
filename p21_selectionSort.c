#include <stdio.h>
void printArr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void selectionSort(int arr[], int n)
{
    int temp, min;
    for (int i = 0; i < n-1; i++)
    {
        min = i;
        for (int j = i; j < n; j++)
        {
            if (arr[min] > arr[j])
                min = j;
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
int main()
{
    int arr[] = {4, 3, 2, 7, 5, 1, 8, 9, 2};
    int n = 9;
    printf("Array Before Sort: ");
    printArr(arr, n);
    selectionSort(arr, n);
    printf("Array After  Sort: ");
    printArr(arr, n);
    return 0;
}