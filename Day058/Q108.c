// Write a program to take an integer array nums.
// Print an array answer such that answer[i] is equal to the product
// of all the elements of nums except nums[i].

#include <stdio.h>

int main()
{
    int nums[100], answer[100];
    int n, i, j;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++)
    {
        answer[i] = 1;

        for (j = 0; j < n; j++)
        {
            if (i != j)
            {
                answer[i] = answer[i] * nums[j];
            }
        }
    }

    printf("Answer array: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", answer[i]);
    }

    return 0;
}