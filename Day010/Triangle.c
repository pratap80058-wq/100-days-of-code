//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter the sides: ");
    scanf("%d%d%d", &a,&b, &c);
    if (a==b && a==c){
        printf("This is an equilateral triangle");
    }
    else if( a!=b && a!=c){
        printf("The triangle is Scalene");
    }
    else if (a==b || c==b || a==c){
        printf("The triangle is Isoceles");
    }
    else{
        printf("Triangle not possible");
    }
    return 0;
}