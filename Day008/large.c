//Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter the values of three no.s: ");
    scanf("%d%d%d", &a,&b,&c);
    if (a>b && a>c){
        printf("%d is the largest",a);
    }
    else if(b>a && b>c){
        printf("%d is the largest",b);
    }
    else{
        printf("%d is the largets",c);
    }
    return 0;
}