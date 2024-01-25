#include <stdio.h>
int main (){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int r=n%2;
    printf(r&0==1?"%d is an even number":"%d is an odd number",n);
    
    return 0;
}