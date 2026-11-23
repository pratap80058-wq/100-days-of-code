//Find the sum of all elements in a matrix.
#include <stdio.h>

int main()
{
    int arr[100][100], rows, cols, sum = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    printf("Enter the matrix elements:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
    }

    printf("Sum of all matrix elements: %d\n", sum);

    return 0;
}