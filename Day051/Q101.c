// Write a program to take a sorted array and a target as inputs.
// Print the index of the first and last occurrence of the target.
// Print -1 -1 if the target is not present.

#include <stdio.h>

int main()
{
    int nums[100], n, target;
    int i, first = -1, last = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the sorted array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target element: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            if (first == -1)
            {
                first = i;
            }

            last = i;
        }
    }

    printf("%d %d", first, last);

    return 0;
}