#include <stdio.h>
#include <math.h>
int main (){
    float mealcost,tipp,taxp;
    float tip,tax;
    int totalbill=0;
    printf("Enter the mealcost: ");
    scanf("%f",&mealcost);
    printf("Enter the tip percentage: ");
    scanf("%f",&tipp);
    printf("Enter the tax percentage: ");
    scanf("%f",&taxp);
    tip=(mealcost*tipp)/100;
    tax=(mealcost*taxp)/100;
    totalbill=round(mealcost+tip+tax);
    printf("The total bill is %d",totalbill);
    return 0;

}