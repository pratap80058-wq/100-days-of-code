//Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main()
{
    int num, first, last, temp, divisor = 1, middle;
    printf("Enter a number: ");
    scanf("%d", &num);
    last = num % 10;
    temp = num;
    while(temp >= 10)
    {
        temp = temp / 10;
        divisor = divisor * 10;
    }
    first = temp;
    middle = (num % divisor) / 10;
    num = last * divisor + middle * 10 + first;
    printf("Number after swapping = %d\n", num);
    return 0;
}