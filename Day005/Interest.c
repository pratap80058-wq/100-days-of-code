//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>

int main(){
    float p,r,t,ci,amount;
    printf("Enter the principal amount, rate of interest, duration: ");
    scanf("%f %f %f", &p,&r,&t);
    amount=p* pow((1+r/100),t);
    ci=amount - p;
    printf("The simple interest: %.2f\n", p*r*t/100);
    printf("The compound interest: %.2f" ,ci);
    return 0;
}