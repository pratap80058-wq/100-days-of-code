// Write a program to take a sorted array and an integer x as input.
// Find the index of the smallest element that is greater than or equal to x.
// If there are multiple occurrences, print the index of the first occurrence.
// Print -1 if no such element exists.

#include <stdio.h>

int main()
{
    int arr[100], n, x;
    int i, index = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the sorted array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            index = i;
            break;
        }
    }

    printf("%d", index);

    return 0;
}