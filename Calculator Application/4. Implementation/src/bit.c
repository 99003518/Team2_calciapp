#include <bitoperations.h>

 int bitoperations() {

   unsigned int a ;	 
   unsigned int b ;	
   int c = 0;       
   
   scanf("%u",&a);
   scanf("%u",&b);

    c = a & b;        
    printf("Line 1 - Value of c is %d\n", c );
    //Binary AND Operator copies a bit to the result if it exists in both operands.
  
   c = a | b;       
   printf("Line 2 - Value of c is %d\n", c );
   //Binary OR Operator copies a bit if it exists in either operand.

   c = a ^ b;      
   printf("Line 3 - Value of c is %d\n", c );
   //Binary XOR Operator copies the bit if it is set in one operand but not both. 

   c = ~a;          
   printf("Line 4 - Value of c is %d\n", c );
   //Binary One's Complement Operator is unary 

   c = a << 2;     
   printf("Line 5 - Value of c is %d\n", c );
   //The left operands value is moved left by the number of bits specified by the right operand.

   c = a >> 2;     
   printf("Line 6 - Value of c is %d\n", c );
   //The left operands value is moved right by the number of bits specified by the right operand.
   
}