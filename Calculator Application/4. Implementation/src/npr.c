#include "npr.h"
#include<stdio.h>
int fact(int num)
{
    if (num <= 1) 
        return 1; 
    return num*fact(num-1); 
}
int npr(int n, int r)
{
    return fact(n)/(fact(n-r));
}
