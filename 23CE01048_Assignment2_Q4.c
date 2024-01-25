#include <stdio.h>
int main(){
    int year;
    printf("Enter a year");
    scanf("%d",&year);
    printf((year%4==0&&year%100!=0)||(year%100==0&&year%400==0)?"%d is a leap year":"%d is not a leap year",year);
    return 0;
}