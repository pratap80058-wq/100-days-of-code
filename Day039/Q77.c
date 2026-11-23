// Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main()
{
    int a[100][100];
    int n, i, j;
    int distinct = 1;

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
        for (j = i + 1; j < n; j++)
        {
            if (a[i][i] == a[j][j])
            {
                distinct = 0;
                break;
            }
        }

        if (distinct == 0)
        {
            break;
        }
    }

    if (distinct == 1)
    {
        printf("The diagonal elements are distinct.");
    }
    else
    {
        printf("The diagonal elements are not distinct.");
    }

    return 0;
}