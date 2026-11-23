// Write a program to take two sorted arrays of size m and n as input.
// Merge both arrays such that the merged array is also sorted.
// Print the merged array.

#include <stdio.h>

int main()
{
    int a[100], b[100], merged[200];
    int m, n;
    int i, j, k;

    printf("Enter the size of first array: ");
    scanf("%d", &m);

    printf("Enter the elements of first sorted array: ");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d", &n);

    printf("Enter the elements of second sorted array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            merged[k] = a[i];
            i++;
        }
        else
        {
            merged[k] = b[j];
            j++;
        }

        k++;
    }

    while (i < m)
    {
        merged[k] = a[i];
        i++;
        k++;
    }

    while (j < n)
    {
        merged[k] = b[j];
        j++;
        k++;
    }

    printf("Merged array: ");

    for (i = 0; i < m + n; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}