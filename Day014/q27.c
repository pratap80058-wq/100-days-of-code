//Write a program to find the sum of first n odd numbers.
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(i = 1; i <= 2 * n; i = i + 2)
    {
        sum = sum + i;
    }
    printf("Sum of first %d odd numbers = %d\n", n, sum);
    return 0;
}