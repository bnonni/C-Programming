#include <stdio.h>

int main(void){
    int num1, denom1, num2,denom2;
    int result_num,result_denom;
    printf("Enterfirstfraction:");
    scanf("%d/%d",&num1,&denom1);
    printf("Entersecondfraction:");
    scanf("%d/%d",&num2,&denom2);
    result_num=num1*denom2+num2*denom1;
    result_denom=denom1*denom2;
    printf("Thesumis%d/%d\n",result_num,result_denom);
    return 0;
    }