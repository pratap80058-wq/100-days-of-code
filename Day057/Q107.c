// Write a program to find the previous greater element for each element of an array.
// The previous greater element is the nearest element on the left which is greater
// than the current element. If no greater element exists, print -1.

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j, previousGreater;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        previousGreater = -1;

        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                previousGreater = arr[j];
                break;
            }
        }

        printf("%d", previousGreater);

        if (i < n - 1)
        {
            printf(", ");
        }
    }

    return 0;
}