//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main(){
    int tsec,h,m,s;
    printf("Enter the time in secs: ");
    scanf("%d", &tsec);
    h=tsec/3600;
    m=(tsec%3600)/60;
    s= (tsec%3600)%60;
    printf("Time is: %02d:%02d:%02d", h,m,s);
    return 0;
}