//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>

int main(){
    int n;
    printf("Enter the no of natural no. u want: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        printf("%d\n", i);
    }
    return 0;
}