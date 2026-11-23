//Rotate an array to the right by k positions.
 #include <stdio.h>

int main()
{
    int arr[100], n, k, temp;

    printf("Enter the total number of elements: ");
    scanf("%d", &n);

    if(n <= 0 || n > 100)
    {
        printf("Invalid number of elements.\n");
        return 0;
    }

    printf("Enter the array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of rotations: ");
    scanf("%d", &k);

    if(k < 0)
    {
        printf("Invalid number of rotations.\n");
        return 0;
    }

    k = k % n;

    for(int i = 0; i < k; i++)
    {
        temp = arr[n - 1];

        for(int j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }

        arr[0] = temp;
    }

    printf("Array after right rotation: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}