/*
Question 83: Count vowels and consonants in a string.
*/

#include <stdio.h>
int main() {
    char str[1000], ch; int i,v=0,c=0;
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++) {
        ch=str[i];
        if(ch>='A'&&ch<='Z') ch+=32;
        if(ch>='a'&&ch<='z') {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++;
            else c++;
        }
    }
    printf("Vowels=%d, Consonants=%d",v,c);
    return 0;
}
