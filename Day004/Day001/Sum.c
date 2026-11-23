//Write a program to input two numbers and display their sum.
#include <stdio.h>

int main(){
    int a,b;
    printf("Enter the value of two no: ");
    scanf("%d %d", &a, &b);
    printf("The sum of %d and %d : %d",a,b,a+b);
    return 0;
}