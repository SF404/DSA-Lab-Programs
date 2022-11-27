#include<stdio.h>
#include<stdbool.h>
bool binarySearch(int arr[], int n, int key){
    int mid, i=0, j=n;
    while(i<=j){
        mid=(i+j)/2;
        if(arr[mid]==key)return true;
        else if(arr[mid]<key)i=mid+1;
        else j=mid-1;
    }
    return false;
}
int main()
{
    int arr[]={2, 8, 3, 5, 1, 9, 3};
    int n=6;
    int key;
    printf("Enter the key You want to find: ");
    scanf("%d", &key);

    (binarySearch(arr, n, key))?printf("Element found"):printf("Element not Found");
    return 0;
}