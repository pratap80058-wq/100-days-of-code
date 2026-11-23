// Write a program to take an integer array arr and an integer k as inputs.
// Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main()
{
    int arr[100];
    int n, k, i, j;
    int sum, maxSum;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    for (i = 0; i <= n - k; i++)
    {
        sum = 0;

        for (j = i; j < i + k; j++)
        {
            sum = sum + arr[j];
        }

        if (i == 0 || sum > maxSum)
        {
            maxSum = sum;
        }
    }

    printf("Maximum sum = %d", maxSum);

    return 0;
}
