#include "ncr.h"
#include<stdio.h>
int fact(int num)
{
    if (num <= 1) 
        return 1; 
    return num*fact(num-1); 
}
int ncr(int n, int r)
{
    int res;
    res= fact(n)/(fact(n-r)*fact(r));
    printf("\n The value of c(%d,%d) is:%d",n,r,res);
    return 0;
}
