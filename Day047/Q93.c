// Check if two strings are anagrams of each other.

#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int count[256] = {0};
    int i, flag = 1;

    printf("Enter first string: ");
    fgets(str1, 100, stdin);

    printf("Enter second string: ");
    fgets(str2, 100, stdin);

    for (i = 0; str1[i] != '\0' && str1[i] != '\n'; i++)
    {
        count[str1[i]]++;
    }

    for (i = 0; str2[i] != '\0' && str2[i] != '\n'; i++)
    {
        count[str2[i]]--;
    }

    for (i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("The strings are anagrams.");
    }
    else
    {
        printf("The strings are not anagrams.");
    }

    return 0;
}