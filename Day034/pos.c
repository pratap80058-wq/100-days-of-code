//Insert an element in an array at a given position.
#include <stdio.h>

int main()
{
    int arr[100], n, pos, element;

    printf("Enter the total number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert: ");
    scanf("%d", &pos);

    if(pos < 1 || pos > n + 1 || n >= 100)
    {
        printf("Invalid position or array is full.\n");
        return 0;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    for(int i = n - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[pos - 1] = element;
    n++;

    printf("Array after insertion: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}