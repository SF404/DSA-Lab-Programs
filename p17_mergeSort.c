#include <stdio.h>
void printArr(int arr[], int n) // Print Function
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void merge(int arr[], int mid, int low, int high) // Function to merge the arrays
{
    int i, j, k, B[high + 1];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            B[k++] = arr[i++];
        }
        else
        {
            B[k++] = arr[j++];
        }
    }
    while (i <= mid)
    {
        B[k++] = arr[i++];
    }
    while (j <= high)
    {
        B[k++] = arr[j++];
    }
    for (int i = low; i <= high; i++) // coppying the sorted elements to main array form temp array
    {
        arr[i] = B[i];
    }
}
void mergeSort(int arr[], int low, int high) // Dividing the array into two (recursively)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, mid, low, high);
    }
    else return;
}
int main()
{
    int arr[] = {2, 4, 5, 19, 9, 4, 20, 2, 1};
    int n = 9;
    printf("Array Before Sort: ");
    printArr(arr, n);
    mergeSort(arr, 0, 8);
    printf("Array After  Sort: ");
    printArr(arr, n);
    return 0;
}
