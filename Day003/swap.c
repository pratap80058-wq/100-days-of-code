//Write a program to swap two numbers using a third variable.
#include <stdio.h>

int main(){
    int x,y,z;
    printf("Enter the value of the origninal no and the no u wwant ot swap: ");
    scanf("%d %d", &x,&y);
    printf("Before swap: %d %d\n",x,y);
    z=x;
    x=y;
    y=z;
    printf("After Swap: %d %d",x,y);
    return 0;
}