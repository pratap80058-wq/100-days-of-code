// Write a program to find the next greater element for each element of an array.
// The next greater element is the nearest element on the right which is greater
// than the current element. If no greater element exists, print -1.

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j, nextGreater;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        nextGreater = -1;

        for (j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                nextGreater = arr[j];
                break;
            }
        }

        printf("%d", nextGreater);

        if (i < n - 1)
        {
            printf(", ");
        }
    }

    return 0;
}