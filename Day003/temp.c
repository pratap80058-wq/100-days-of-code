//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>

int main(){
    float ctemp, ftemp;
    printf("Enter the temp in celcius:");
    scanf("%f", &ctemp);
    ftemp= (9/5*ctemp) + 32;
    printf("%.2f C into fahrenheit: %.2fF ", ctemp,ftemp);
    return 0;
}