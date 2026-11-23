//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main()
{
    int arr[10][10], sum[10];
    int rows, cols, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    printf("Enter the elements of the matrix:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Finding sum of each row
    for(i = 0; i < rows; i++)
    {
        sum[i] = 0;

        for(j = 0; j < cols; j++)
        {
            sum[i] = sum[i] + arr[i][j];
        }
    }

    printf("Sum of each row:\n");

    for(i = 0; i < rows; i++)
    {
        printf("Row %d = %d\n", i + 1, sum[i]);
    }

    return 0;
}