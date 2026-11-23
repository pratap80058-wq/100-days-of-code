// Print each character of a string on a new line.

#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    printf("Characters of the string are:\n");

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        printf("%c\n", str[i]);
    }

    return 0;
}