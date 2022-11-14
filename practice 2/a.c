#include<stdio.h>
// find the power of a number using loop
int main() {
    int base, exponent,pow=1,i;
    while(1) {
        i=1;
    printf("\n\n*Enter Base : ");
    scanf("%d", &base);

    printf("\n*Enter Exponent : ");
    scanf("%d", &exponent);

while(i<=exponent) {

    pow = pow * base;

    i++;
}
    printf("\n%d ^ %d = %d",base,exponent,pow);
    pow=1;
    }
return 0;
}