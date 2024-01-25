#include <stdio.h>
int main(){
    int a,b,c;
    int max=0;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("\nEnter second number:");
    scanf("%d",&b);
    printf("\nEnter third number:");
    scanf("%d",&c);
    max=a>b?a:b;
    max=max>c?max:c;

    printf("Maximum value is %d",max);
    return 0;

}