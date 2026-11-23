//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main(){
    int l,b;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d %d", &l,&b);
    printf("The area of the Rectangle: %d\n",l*b);
    printf("The perimeter of the rectangle: %d ", 2*(l+b));
    return 0;
}