
#include <division.h>
int division(int n3,int n4) {
    int n1, n2; 
    float quotient;
    int remainder;
    printf("Enter n1: ");
    scanf("%d", &n1);
    printf("Enter n2: ");
    scanf("%d", &n2);

    if(n2==0)
    {
        printf("error");
    }
    else if(n2>=1)
    {
        // Computes quotient
        quotient = n1 / n2;
    }
    else if((n1>=0)&&(n2>=1))
    {
    // Computes quotient
    quotient = n1 / n2;

    // Computes remainder
    remainder = n1 % n2;


    printf("Quotient = %f\n", quotient);
    printf("Remainder = %d", remainder);
    }
    else
    {
        printf("Error");
    }
    
}
