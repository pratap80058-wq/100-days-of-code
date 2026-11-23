// Write a program to take an array of integers as input and calculate the pivot index.
// The pivot index is the index where the sum of elements to the left is equal
// to the sum of elements to the right. Print the leftmost pivot index.
// Print -1 if no such index exists.

#include <stdio.h>

int main()
{
    int arr[100], n, i, j;
    int leftSum, rightSum, pivot = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        leftSum = 0;
        rightSum = 0;

        for (j = 0; j < i; j++)
        {
            leftSum = leftSum + arr[j];
        }

        for (j = i + 1; j < n; j++)
        {
            rightSum = rightSum + arr[j];
        }

        if (leftSum == rightSum)
        {
            pivot = i;
            break;
        }
    }

    printf("%d", pivot);

    return 0;
}