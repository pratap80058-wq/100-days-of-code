// Write a program that reads text from input.txt,
// converts all lowercase letters to uppercase,
// and writes the result to output.txt.

#include <stdio.h>

int main()
{
    FILE *input, *output;
    int ch;

    input = fopen("input.txt", "r");

    if (input == NULL)
    {
        printf("Error opening input.txt.");
        return 1;
    }

    output = fopen("output.txt", "w");

    if (output == NULL)
    {
        printf("Error opening output.txt.");
        fclose(input);
        return 1;
    }

    while ((ch = fgetc(input)) != EOF)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;
        }

        fputc(ch, output);
    }

    fclose(input);
    fclose(output);

    printf("Text converted to uppercase and saved to output.txt.");

    return 0;
}