#include <mul.h>

int multiplication(int a,int b) {
    //int a;
    //int b;
    int mul = 0;
    
    printf(" the first number : %d", a);
    //scanf("%d",&a);
    
    printf(" the second number : %d",b);
    //scanf("%d",&b);

    if(a>0 && b>0) {
        mul = a*b;
        return mul;
        //printf("The product is = %d", mul);
    }

    else if (a<0 && b<0) {
        mul = a*b;
        return mul;
        //printf("The product is = %d", mul);
    }
    
    else if (a<0 && b>0) {
        mul = a*b;
        return mul;
        //printf("The product is = %d", mul);
    }
    
    else  {
        mul = a*b;
        return mul;
        //printf("The product is = %d", mul);
    }
    
    
    
    return 0;

}
