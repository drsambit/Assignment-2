#include <stdio.h>
int main (){
    int n;
    printf("Input a number: ");
    scanf("%d",&n);
    printf(n%2!=0&&n>=100&&n<=200?"True":"False");

}