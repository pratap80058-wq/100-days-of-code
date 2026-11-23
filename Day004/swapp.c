//Write a program to swap two numbers without using a third variable.
#include <stdio.h>

int main(){
    int a,b;
    printf("Enter the value of twwo no.s: ");
    scanf("%d %d", &a,&b);
    printf("Before swwap : %d %d\n", a,b);
    printf("After swap: %d %d", b, a);
    return 0;
}