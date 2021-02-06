#include <subtaction.h>

int sub(int c, int d)
{
    int sub,a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    sub = a - b;
    printf("Result = %d ",sub);
    return sub;
}
