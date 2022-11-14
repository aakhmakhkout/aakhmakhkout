#include<stdio.h>
// hcf 
int main() {
    while (1) {

    int num1,num2,hcf=1,min,i=1;
    printf("\n\n*Enter Num1 : ");
    scanf("%d", &num1);
    printf("\n*Enter Num2 : ");
    scanf("%d", &num2);

    min = (num1>num2) ? num2 : num1;

    while (i<=min) {
        if(num1%i==0 && num2%i==0) {
             hcf=i;
        }
            i++;
    }
     
     printf("\nANS : HCF OF %d & %d = %d",num1,num2,hcf);

    }
    return 0;
}