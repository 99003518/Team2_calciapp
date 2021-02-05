#include <percentage.h>


float percentage(float operand1,float operand2)
{
    float result;
    /* Input 2 numbers */
    printf("Enter 2 numbers: \n");
    scanf("%f %f", &operand1,&operand2);
    /*Read the 2 numbers entered */
    if(operand1==0 || operand2==0)
    {
        printf("Both the numbers entered should be greater than 0");
    }
    /*The numbers entered should be greater than 0 else error will be displayed in calculator*/
    else
    {

    /* Calculate percentage */
    /*Formula for percentage is */

    result = (operand1 / operand2 )*100;

    /* Print the result */
    printf("Percentage = %.2f", result);
    /* The result is rounded off to 2 decimal places */
    }
    return result;
}

    
