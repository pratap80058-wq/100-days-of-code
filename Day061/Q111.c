// Write a program to take an integer array nums as input.
// Find the contiguous subarray which has the largest sum
// and print the maximum sum.

#include <stdio.h>

int main()
{
    int nums[100];
    int n, i, j;
    int sum, maxSum;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    maxSum = nums[0];

    for (i = 0; i < n; i++)
    {
        sum = 0;

        for (j = i; j < n; j++)
        {
            sum = sum + nums[j];

            if (sum > maxSum)
            {
                maxSum = sum;
            }
        }
    }

    printf("Maximum subarray sum = %d", maxSum);

    return 0;
}