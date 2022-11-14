#include<stdio.h>
// practice set
/*
calculate the  tax paid by an employee to the govt. 
income                         tax
2.5 lack - 5.0 lakh            5%
5.0 lack - 10.0 lakh           20%
above 10.0 lakh                30%

NOTE : No tax on below 2.5 lakh
 */ 

int main() {
    float income, tax=0;
    printf("Enter Income : ");
    scanf("%f", &income);

    if (income>=250000.0 && income<=500000.0) {
        tax=(income * 5) / 100;
        printf("\n\nTax = %.2f", tax);
    }
    else if (income>500000.0 && income<=1000000.0) {
        tax=(income * 20) / 100;
        printf("\n\nTax = %.2f", tax);
    }
    else if (income>1000000.0) {
        tax = (income * 30) / 100;
        printf("\n\nTax = %.2f", tax);
    }
    else {
        printf("\n\nNo Tax");
    }
    return 0;
}