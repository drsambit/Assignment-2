#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    printf("Enter third number");
    scanf("%d",&c);
    int max=0;
    if(a>b && a>c){
        max=a;
    }
    else if (b>c && b>a){
        max=b;
    }
    else {
        max=c;
    }
    printf("The greatest value among the three is %d",max);
    return 0;


}