// Write a program to take an integer array nums as input.
// Find the contiguous subarray that has the largest product
// and print the maximum product.

#include <stdio.h>

int main()
{
    int nums[100];
    int n, i, j;
    int product, maxProduct;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    maxProduct = nums[0];

    for (i = 0; i < n; i++)
    {
        product = 1;

        for (j = i; j < n; j++)
        {
            product = product * nums[j];

            if (product > maxProduct)
            {
                maxProduct = product;
            }
        }
    }

    printf("Maximum product = %d", maxProduct);

    return 0;
}