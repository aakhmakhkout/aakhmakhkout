#include<stdio.h>
// switch case

int main() {
    int days, i=1;
    while (1) {

    printf("\n\nDAYS\n\n1. SUNDAY      2. MONDAY\n\n3. TUESDAY     4. WEDNESDAY\n\n5. THURSDAY    6. FRIDAY\n\n7. SATURDAY\n\n");
    
    printf("ENTER DAY [1 - 7] : ");
    scanf("%d", &days);
    
    switch (days) {
           case 1 : printf("\n\n****** TODAY IS OFF ******");
           break;

           case 2 : printf("\n\n****** COLLEGE ******");
           break;

           case 3 : printf("\n\n****** ASSIGNMENT ******");
           break;

           case 4 : printf("\n\n****** PRESENTATION ******");
           break;

           case 5 : printf("\n\n****** CLASS WORKS ******");
           break;

           case 6 : printf("\n\n****** HOLIDAY ******");
           break;

           case 7 : printf("\n\n****** EXAM ******");
           break;

           default : printf("\n\n****** INVALID DAY! ******");
           break;


    }
    i++;
    }
    return 0;
}