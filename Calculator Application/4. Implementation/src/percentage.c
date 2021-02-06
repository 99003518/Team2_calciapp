#include <percentage.h>
/*include header file percentage.h in this program*/

float percentage(float operand1,float operand2)
    /*This is the function that is called from the main function */
{
    float result;
    /*Declare a variable result as float value*/
    printf("Enter 2 numbers: \n");
    /*Input 2 numbers*/
    scanf("%f %f", &operand1,&operand2);
    /*Read the 2 numbers entered */
    /*Use if-else statements*/
    if(operand1==0)
    {
        printf("The number entered should be greater than 0");
    }
      /*The number entered should be greater than 0 else error will be displayed in calculator*/
    /*When if condition fails then the compiler checks if else statement*/
    else if(operand2==0)
    {
        printf("The number entered should be greater than 0");
    }
    /*The number entered should be greater than 0 else error will be displayed in calculator*/
    /*When if-else condition fails then else statement will be executed*/
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
    /*After code gets executed the result will be displayed*/
}

    
