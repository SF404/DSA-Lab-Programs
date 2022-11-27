// ---------Program to demonistrate memory addressess of multi-dimensional Arrays-------------
#include <stdio.h>
int main()
{
    int n = 3;
    int arr[n]; // Declaring 1D array
    printf("---Printing 1D Array---\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr + i);
    }
    printf("\n");
    int arr2d[n][n]; // Declaring 2D array
    printf("---Printing 2D array---\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            printf("%d ", *(arr2d + i) + j);
        }
        printf("\n");
    }
    int arr3d[n][n][n]; // Declaring 3D array
    printf("---Printing 3D array---\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                printf("%d ", (*(*(arr3d + i) + j) + k));
            }
            printf("\n");
        }
        printf("-----------------------\n");
    }

    return 0;
}