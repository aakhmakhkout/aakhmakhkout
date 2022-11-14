#include<stdio.h>
// lcm of two numbers

int main() {
    while (1) {

    int num1,num2,lcm=1,i=1, max;
    printf("\n\nEnter Number One : ");
    scanf("%d", &num1);

    printf("\nEnter Number Two : ");
    scanf("%d", &num2);

    max = (num1>num2) ? num1 : num2;
    i=max;

    while (1) {
        if(i%num1==0 && i%num2==0) {
             lcm = i;

             break;
        }
        i=i+max;
    }
    printf("\n\nLCM OF %d & %d IS : %d", num1,num2,lcm);
    }
    return 0;
}