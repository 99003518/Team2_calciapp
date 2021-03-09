#include<modulo.h>
int modulo(int num1, int num2){        //function declaration
if((num1>=0)&&(num2>=1))
{
    return num1%num2;        //prints the modulo of two numbers ( numerator greater than or equal to zero and denominator greater than 1)
}
else{
    printf("error");       //error message for  : modulo for negative numbers , floating point numbers or denominator equal to or less than zero 
    return 0;
}
}

    
