// Find the sum of upper triangular elements of a matrix.

#include <stdio.h>

int main()
{
    int a[100][100];
    int n, i, j, sum = 0;

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            sum = sum + a[i][j];
        }
    }

    printf("Sum of upper triangular elements = %d", sum);

    return 0;
}