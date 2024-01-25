#include <stdio.h>
int main(){
    int totaldays;
    int years,months,weeks,days;
    printf("Enter the total number of days");
    scanf("%d",&totaldays);
    years=(int)(totaldays/365);
    totaldays=totaldays%365;
    months=(int)(totaldays/30);
    totaldays=totaldays%30;
    weeks=(int)(totaldays/7);
    days=totaldays%7;

    printf("Years=%d",years);
    printf("\nMonths=%d",months);
    printf("\nWeeks=%d",weeks);
    printf("\nDays=%d",days);
    return 0;

}