// Write a program to take a string s as input.
// Find the length of the longest substring without repeating characters.
// Print the length as output.

#include <stdio.h>

int main()
{
    char s[100];
    int i, j, k;
    int length, maxLength = 0;
    int repeated;

    printf("Enter a string: ");
    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = i; s[j] != '\0'; j++)
        {
            repeated = 0;

            for (k = i; k < j; k++)
            {
                if (s[k] == s[j])
                {
                    repeated = 1;
                    break;
                }
            }

            if (repeated == 1)
            {
                break;
            }

            length = j - i + 1;

            if (length > maxLength)
            {
                maxLength = length;
            }
        }
    }

    printf("Length of longest substring = %d", maxLength);

    return 0;
}