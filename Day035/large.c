//Find the second largest element in an array.
#include <stdio.h>

int main()
{
    int arr[100], n, largest, second, found = 0;

    printf("Enter the total number of elements: ");
    scanf("%d", &n);

    if(n < 2 || n > 100)
    {
        printf("Invalid number of elements.\n");
        return 0;
    }

    printf("Enter the array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < largest)
        {
            if(found == 0 || arr[i] > second)
            {
                second = arr[i];
                found = 1;
            }
        }
    }

    if(found == 1)
    {
        printf("Largest element: %d\n", largest);
        printf("Second largest element: %d\n", second);
    }
    else
    {
        printf("No second largest element exists.\n");
    }

    return 0;
}