// Write a program to take an integer array nums and an integer k as inputs.
// Find the contiguous subarray of length k that has the maximum average
// and print the maximum average.

#include <stdio.h>

int main()
{
    int nums[100];
    int n, k, i, j;
    float sum, maxSum, maxAverage;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    for (i = 0; i <= n - k; i++)
    {
        sum = 0;

        for (j = i; j < i + k; j++)
        {
            sum = sum + nums[j];
        }

        if (i == 0 || sum > maxSum)
        {
            maxSum = sum;
        }
    }

    maxAverage = maxSum / k;

    printf("Maximum average = %.2f", maxAverage);

    return 0;
}