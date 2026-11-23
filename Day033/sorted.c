//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main()
{
    int arr[100], n, element, i;

    printf("Enter the total number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements in ascending order: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    for(i = n - 1; i >= 0 && arr[i] > element; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[i + 1] = element;
    n++;

    printf("Array after insertion: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}