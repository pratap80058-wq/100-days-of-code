// Write a program to take an integer array nums containing only positive integers
// and an integer target as inputs. Find two distinct indices i and j such that
// nums[i] + nums[j] equals the target.
// Print the two indices. If no solution exists, print -1 -1.

#include <stdio.h>

int main()
{
    int nums[100];
    int n, target;
    int i, j;
    int index1 = -1, index2 = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target: ");
    scanf("%d", &target);

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                index1 = i;
                index2 = j;
                break;
            }
        }

        if (index1 != -1)
        {
            break;
        }
    }

    printf("%d %d", index1, index2);

    return 0;
}