// Write a C program that opens an existing file (e.g., info.txt)
// and reads its contents using fgets().
// Print all the lines to the console until EOF is reached.

#include <stdio.h>

int main()
{
    FILE *fp;
    char line[100];

    fp = fopen("info.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file.");
        return 1;
    }

    printf("Contents of the file:\n");

    while (fgets(line, 100, fp) != NULL)
    {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}