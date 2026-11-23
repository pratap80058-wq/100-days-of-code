// Find the longest word in a sentence.

#include <stdio.h>

int main()
{
    char str[100], longest[100];
    int i = 0, start = 0, length = 0;
    int max = 0, j;

    printf("Enter a sentence: ");
    fgets(str, 100, stdin);

    while (1)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            length = i - start;

            if (length > max)
            {
                max = length;

                for (j = 0; j < length; j++)
                {
                    longest[j] = str[start + j];
                }

                longest[length] = '\0';
            }

            start = i + 1;

            if (str[i] == '\n' || str[i] == '\0')
            {
                break;
            }
        }

        i++;
    }

    printf("Longest word = %s", longest);

    return 0;
}