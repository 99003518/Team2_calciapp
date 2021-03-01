#include <npr.h>
#include<stdio.h>
int fact(int num)
{
    if (num <= 1) 
        return 1; 
    return num*fact(num-1); 
}
int npr(int n, int r)
{
    int res;
    if(n<0 || r<0)
    {
        printf("\n error");
        printf("\n Can't be calculated for negative integers");
    }
    else
    {
        res = fact(n)/(fact(n-r));
        printf("%dp%d is %d",n,r,res);
    }
    return 0;
}
