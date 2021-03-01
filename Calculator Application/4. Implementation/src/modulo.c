#include<modulo.h>
int modulo(int num1, int num2){        //function declaration
if((num1>=0)&&(num2>=1))
{
    return num1%num2;        //prints the modulo of two numbers
}
else{
    printf("error");
    return 0;
}
}

    
