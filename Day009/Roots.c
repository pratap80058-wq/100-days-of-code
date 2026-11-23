//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,r1,r2,d;
    printf("Enter the value of a,b,c: ");
    scanf("%f %f %f", &a, &b, &c);
    d= b*b - 4*a*c;
    if (d>0){
        r1= (-b + sqrt(d))/(2*a);
        r2= (-b- sqrt(d))/(2*a);
        printf("The roots are real and distinct: %.2f , %.2f", r1,r2);
    }
    else if( d==0){
        r1=r2=(-b + sqrt(d))/(2*a);
        printf("The roots are real and same:  %.2f , %.2f", r1,r2);
    }
    else{
        printf("The roots are complex :( ");
    }
    return 0;
}