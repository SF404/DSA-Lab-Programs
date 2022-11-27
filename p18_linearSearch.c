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
    printf("Enter the key You want to Find: ");
    scanf("%d", &key);
    getchar();

    (LinearSearch(arr, n, key))?printf("Element is Found"):printf("Element Not Found");
    printf("\nPrint Enter Key TO cntinue:");
    getchar();
    return 0;
}