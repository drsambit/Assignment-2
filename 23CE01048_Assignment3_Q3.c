#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three sides of a triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if ((a+b>c) && (b+c>a) && (c+a>b)){
        printf("TRIANGLE IS POSSIBLE");
    }
    else{
        printf("TRIANGLE IS NOT POSSIBLE");
    }
    return 0;
}

