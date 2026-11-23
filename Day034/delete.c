//Delete an element from an array
#include <stdio.h>

int main()
{
    int arr[100], n, pos;

    printf("Enter the total number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete: ");
    scanf("%d", &pos);

    if(pos < 1 || pos > n)
    {
        printf("Invalid position.\n");
        return 0;
    }

    for(int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Array after deletion: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}