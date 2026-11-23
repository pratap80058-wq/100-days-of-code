//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>

int main(){
    char c;
    printf("Enter the character: ");
    scanf("%c", &c);
    if (c=='a'|| c=='e' || c=='i' || c=='u' || c=='o' || c=='A'|| c=='I'|| c=='O'|| c=='U'|| c=='E'){
        printf("%c is a vowel", c);
    }
    else {
        printf("%c is a consonent",c);
    }
    return 0;
}