//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main()
{
    int n, digit, freq[10] = {0};
    int max = 0, result = 0;

    printf("Enter an integer number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        n = -n;
    }

    do
    {
        digit = n % 10;
        freq[digit]++;
        n = n / 10;
    } while(n > 0);

    for(int i = 0; i < 10; i++)
    {
        if(freq[i] > max)
        {
            max = freq[i];
            result = i;
        }
    }

    printf("Most frequent digit: %d\n", result);
    printf("Number of occurrences: %d\n", max);

    return 0;
}