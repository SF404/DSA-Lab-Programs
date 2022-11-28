#include <stdio.h>
// #include <stdin.h>
#include <stdbool.h>
bool LinearSearch(int arr[], int n, int key){
    while(n--)if(arr[n]==key)return true;
    return false;
}
int main()
{
    int arr[] = {4, 5, 2, 6, 1, 7, 2, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("The Array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nEnter the key You want to Find: ");
    scanf("%d", &key);
    getchar();

    (LinearSearch(arr, n, key))?printf("Element is Found"):printf("Element Not Found");
    
    return 0;
}