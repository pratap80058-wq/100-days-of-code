// Reverse a string.

#include <stdio.h>

int main()
{
    char str[100];
    int i, n = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    while (str[n] != '\0' && str[n] != '\n')
    {
        n++;
    }

    printf("Reversed string: ");

    for (i = n - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}
