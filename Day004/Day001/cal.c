//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main(){
    float a,b;
    printf("Enter the value of the two numbers: ");
    scanf("%f %f", &a, &b);
    printf("The sum of %.2f and %.2f : %.2f\n", a,b,a+b);
    printf("The Diff of %.2f and %.2f : %.2f\n", a,b,a-b);
    printf("The Product of %.2f and %.2f : %.2f\n", a,b,a*b);
    printf("The Quotient of %.2f and %.2f : %.2f\n", a,b,a/b);
    return 0;
}