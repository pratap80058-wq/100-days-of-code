//Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main()
{
    int arr[100], n, positive = 0, negative = 0, zero = 0;

    printf("Enter the total number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > 0)
        {
            positive++;
        }
        else if(arr[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    printf("Total positive numbers: %d\n", positive);
    printf("Total negative numbers: %d\n", negative);
    printf("Total zero elements: %d\n", zero);

    return 0;
}