#include <stdio.h>
int main (){
    int m,n,k;
    printf("Enter the marks obtained which should be in between 0 and 100: ");
    scanf("%d",&m);
    printf("Enter the number of classes attended: ");
    scanf("%d",&n);
    printf("Enter the total number of classes conducted which should be more than or equal to the number of classes attended: ");
    scanf("%d",&k);
    if((m<0) || (m>100) || (n>k)){
        printf("INVALID INPUT");
    }
    else {
        float w,t;
        w=(float)n/k;
        t=m*w;
        if (t>=90){
            printf("Final Score= %f",t);
            printf("Grade is = EX");
        }
        else if (t>=80 && t<89){
             printf("Final Score=%f",t);
             printf("Grade is = A");

        }
        else if (t>=70 && t<79){
             printf("Final Score=%f",t);
             printf("Grade is = B");
        }
        else if (t>=60 && t<69){
             printf("Final Score=%f",t);
             printf("Grade is = C");

        }
        else if (t>=50 && t<59){
             printf("Final Score=%f",t);
             printf("Grade is = D");
        }
        else if (t>=40 && t<49){
             printf("Final Score=%f",t);
             printf("Grade is = E");
        }
        else {
              printf("Grade is = F");
        }

    }
    return 0;
        

}