
#include <division.h>
int division(int n3,int n4) {
    int n1, n2; 
    int quotient, remainder;
    printf("Enter n1: ");
    scanf("%d", &n1);
    printf("Enter n2: ");
    scanf("%d", &n2);
<<<<<<< HEAD
    if(n2==0)
    {
        printf("Division can't be done");
    }
    else
    {
        // Computes quotient
        quotient = n1 / n2;
    }
    if(n2==0)
    {
        printf("Division can't be done");
    }
    else
    {
        // Computes remainder
        remainder = n1 % n2;
    }
=======
    
    if((n1>=0)&&(n2>=1))
    {
    // Computes quotient
    quotient = n1 / n2;

    // Computes remainder
    remainder = n1 % n2;
>>>>>>> 29a71d5663325e8c67d8722e1610fb4278b4a1eb

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);
    }
    else
    {
        printf("Error");
    }
    
}
