// Write a program to take an input array of size n.
// The array should contain all the integers between 0 to n except for one.
// Print the missing number.

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int expectedSum = 0, actualSum = 0;
    int missing;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        actualSum = actualSum + arr[i];
    }

    for (i = 0; i <= n; i++)
    {
        expectedSum = expectedSum + i;
    }

    missing = expectedSum - actualSum;

    printf("Missing number = %d", missing);

    return 0;
}