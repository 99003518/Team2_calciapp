#include <addition.h>

int add(int a, int b)
{
    int sum;
    sum = a+b;
    printf("Result = %d ",sum);  
    return sum;                   //Returning sum of a and b
}
int addOvf(int* result, int a, int b)  
{  
    *result = a + b;  
    if(a > 0 && b > 0 && *result < 0)  
        return -1;  
    if(a < 0 && b < 0 && *result > 0)  
        return -1;  
     
}  
