// Count characters in a string without using built-in length functions.

#include <stdio.h>

int main()
{
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        count++;
    }

    printf("Number of characters = %d", count);

    return 0;
}