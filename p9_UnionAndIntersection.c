// -------------Program to find Union and Intersection of two Array------------
#include <stdio.h>

int min(int n, int m)
{
    return (n < m) ? n : m;
}
int main()
{
    // ----------------Taking Input-------------------
    int n, m;
    printf("Enter the size of Array1, Array2 Respectively: ");
    scanf("%d%d", &n, &m);
    int arr1[n], arr2[m];
    printf("Enter the Elements of Array1: ");
    for (int i = 0; i < n; i++)
        scanf("%d", (arr1 + i));
    printf("Enter the Elements of Array2: ");
    for (int i = 0; i < m; i++)
        scanf("%d", (arr2 + i));
    // -----------------------------------------------
    int arrU[m + n];
    int arrI[min(n, m)];
    int i = 0, j = 0, U = 0, I = 0;
    for (int k = 0; k < n + m; k++)
    {
        if (i < n && j < m)
        {
            if (arr1[i] < arr2[j])
                arrU[U++] = arr1[i++];
            else if (arr1[i] > arr2[j])
                arrU[U++] = arr2[j++];
            else
            {
                arrI[I++] = arr1[i++];
                arrU[U++] = arr2[j++];
            }
        }
    }
    while (i < n)
    {
        arrU[U++] = arr1[i++];
    }
    while (j < m)
    {
        arrU[U++] = arr2[j++];
    }
    printf("Union: ");
    for (int i = 0; i < U; i++)
    {
        printf("%d ", arrU[i]);
    }
    printf("\nIntersection: ");
    for (int i = 0; i < I; i++)
    {
        printf("%d ", arrI[i]);
    }

    return 0;
}