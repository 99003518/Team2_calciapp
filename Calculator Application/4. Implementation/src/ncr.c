#include <ncr.h>
#include<stdio.h>
int fac(int num)                     //Returns factorial of num
{
    if (num == 1 || num == 0)        
    {
        return 1;
    }
    else if(num < 0)
    {
        printf("Error factorial cannot be calculated for negative integers");
    }
    else
    {
        return num*fac(num-1);
     }
         
    
}
int ncr(int n, int r)           //Return ncr value
{
    int res;
    if(n<0 || r<0)
    {
        printf("\n error");
        printf("\n Can't be calculated for negative integers");
    }
    else
    {
        res= fac(n)/(fac(n-r)*fac(r));
        printf("\n The value of c(%d,%d) is:%d",n,r,res);
    }
    return 0;
}
