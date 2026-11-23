// Write a C program that creates a text file named info.txt in write mode.
// Take the user's name and age as input and write them to the file using fprintf().
// Display a message confirming that the data was successfully saved.

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[100];
    int age;

    fp = fopen("info.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file.");
        return 1;
    }

    printf("Enter your name: ");
    scanf(" %[^\n]", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);

    fclose(fp);

    printf("Data was successfully saved to info.txt.");

    return 0;
}