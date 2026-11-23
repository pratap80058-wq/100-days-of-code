//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>

int main(){
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);
    if(ch>=65 && ch<=90){
        printf("%c is in Uppercase alphabet", ch);
    }
    else if (ch>90 && ch<= 122){
        printf("%c is Lowercase alphabet", ch);
    }
    else{
        printf("%c is a special character",ch);
    }
    return 0;
}