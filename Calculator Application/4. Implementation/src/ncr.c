#include <ncr.h>
#include<stdio.h>
int fac(int num)
{
    if (num <= 1) 
        return 1; 
    return num*fac(num-1); 
}
int ncr(int n, int r)
{
    int res;
    if(n<0 || r<0)
    {
        printf("\n Can't be calculated for negative integers");
    }
    else
    {
        res= fac(n)/(fac(n-r)*fac(r));
        printf("\n The value of c(%d,%d) is:%d",n,r,res);
    }
    return 0;
    
}

