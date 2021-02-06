
#include <division.h>
int division(int n3,int n4) {
    int n1, n2; 
    int quotient, remainder;
    printf("Enter n1: ");
    scanf("%d", &n1);
    printf("Enter n2: ");
    scanf("%d", &n2);

    // Computes quotient
    quotient = n1 / n2;

    // Computes remainder
    remainder = n1 % n2;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);
    
}
