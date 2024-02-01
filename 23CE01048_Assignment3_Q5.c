#include <stdio.h>
int main (){
    int nd;
    printf("Enter the number of days delayed: ");
    scanf("%d",&nd);
    int fine;
    if(nd<=5){
        fine=1;
        printf("Your fine amount is: %d",fine);
    }
    else if(nd>5 && nd<=10){
        fine=1+2;
        printf("Your fine amount is: %d",fine);
    }
    else if(nd>10 && nd<=30){
        fine=1+2+5;
        printf("Your fine amount is: %d",fine);
    }
    else{
        printf("YOUR MEMBERSHIP IS CANCELLED");
    }
 
    return 0;
}