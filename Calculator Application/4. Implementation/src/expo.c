#include <expo.h>

float exponent(int b,int e)
{
    int base,exp;
    float p;
    base=b;
    exp=e;
    printf("Enter the base number entered by the user is %d",base);
    
    printf("Enter the exponent number entered by the user is %d",exp);
    
    if(exp>=1)
    { 
        p=1;
        for(int i=1;i<=exp;i++)
        {
            p=p*base;
        }
        return p;
        //printf("The value is:%f",p);
    }
    else if(exp==0)
    {
        int a=1;
        //printf("The value is:%d",a);
        return a;
    }
    else 
    {
        p=1.00;
        float xx=(float)b;
        
        {
           e=-1*e;
           xx=1/xx;
        }
        for(int i=1;i<=e;i++)
        {
            p=p*xx;
        }
        //printf("The value is:%f",p);
        return p;
    }

}