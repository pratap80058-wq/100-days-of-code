#include <stdio.h>

int main()
{
    int arr[10][10];
    int n, i, j, symmetric = 1;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Checking symmetry
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(arr[i][j] != arr[j][i])
            {
                symmetric = 0;
                break;
            }
        }

        if(symmetric == 0)
        {
            break;
        }
    }

    if(symmetric == 1)
    {
        printf("The matrix is symmetric.");
    }
    else
    {
        printf("The matrix is not symmetric.");
    }

    return 0;
}