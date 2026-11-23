// Reverse each word in a sentence without changing the word order.

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, start, j;

    printf("Enter a sentence: ");
    fgets(str, 100, stdin);

    while (str[i] != '\0')
    {
        while (str[i] == ' ')
        {
            printf(" ");
            i++;
        }

        if (str[i] == '\n' || str[i] == '\0')
        {
            break;
        }

        start = i;

        while (str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
        {
            i++;
        }

        for (j = i - 1; j >= start; j--)
        {
            printf("%c", str[j]);
        }
    }

    return 0;
}