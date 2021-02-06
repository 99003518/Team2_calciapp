# High Level Test Plan
| ID | Description | Sample input | Expected output |
| --- | --- | --- | --- |
| TP\_HL\_01 | Addition operation | 4+8 | 12 |
| TP\_HL\_02 | Subtraction operation | 12-3 | 9 |
| TP\_HL\_03 | Multiplication operation | 5\*5 | 25 |
| TP\_HL\_04 | Division operation | 60/3 | 20 |
| TP\_HL\_05 | Exponential | 2^5 | 32 |
| TP\_HL\_06 | Factorial of a number | 5! | 120 |
| TP\_HL\_07 | Modulo | 4%2 | 0 |
| TP\_HL\_08 | Percentage | 50%100 | 50 |
| TP\_HL\_09 | Permutation | 5P2 | 20 |
| TP\_HL\_10 | Combination | 5C2 | 10 |
| TP\_HL\_11 | Trigonometric | Sin(90) | 1 |
| TP\_HL\_12 | Km to m | 2 | 2000 |
| TP\_HL\_13 | Hectare to acres | 1 | 2.47 |
| TP\_HL\_14 | Inch to cm | 1 | 2.54 |
# LOW LEVEL TEST PLAN
#### TEST PLAN (FACTORIAL)
| ID |Description | Expected input or state | Expected output or State |Type of test|
| ------ | ------ | ------ | ------ |------|
|T_01_LL_06_HL_02 |Check output when the input is less than 0 |N= -3 |Error message | Requirement based test|
|T_02_ LL_06_HL_02 |Check output when the input is 0| N= 0 |1 |Requirement based test|
|T_03_ LL_06_HL_02 |Check output when  the input is 1 |N=1 |1 |Requirement based test|
|T_04_ LL_06_HL_02 |Check output when the input is greater than 0 but less than 11| N= 8 |40,320|Requirement based test|
|T_03_ LL_06_HL_02 |Check output when  the input is greater than 11 |N=23 |Error message |Boundary based test|

#### Test Plan (nPr and nCr)
Test Plan for nPr and nCr operations As per formula we know the calculations for both nPr and nCr operations include factorial operation Here we listed some factorials, nPr and nCr calculations
|Expected Input  | Expected Output|
|-----|-----|
   0!          |      1
   1!          |      1
  7P3          |     210
  7C3          |     35
  4P0          |      1
  4C0          |      1
  6P6          |     720
  6C6          |      1
  
  
  
#### TEST PLAN(EXPONENTIAL)  
  LL_05 TEST PLAN 

| TEST\_ID | DESCRIPTION | EXPECTED INPUT | EXPECTED OUTPUT | TYPE OF TEST |
| --- | --- | --- | --- | --- |
| T\_01\_LL\_05\_HL\_02 | To check the output when the exponent is positive | Numbers x and y greater than one | Output is greater than one |Requirement based test |
| T\_02\_LL\_05\_HL\_02 | To check the output when the exponent is negative | Number x is greater than zero and y is less than zero | Output is less than one | Requirement based test |
| T\_03\_LL\_05\_HL\_02 | To check the output when the exponent is zero | Number x is greater than zero and y is equal to zero | Output is equal to one | Requirement based test |


**Test Plan for Modulo Division & Distance Conversion:**

| Description                            | Precondition |  I/p    | Expected o/p  |
|----------------------------------------|--------------|---------|---------------|
| Modulo Division of two number’s        | User Input   | 9 and 4 | 1             |
| Modulo Division of two number’s        | User Input   | 11 and 5 | 1            |
| Conversion from Kilometer’s to meter’s | User Input   | 12      | 12000         |
| Conversion from inch to Centimeters    | User Input   | 12      | 30.48         |
| Conversion from Hectares to Acres      | User Input   | 12      | 29.6526       |
| Conversion from Hectares to Acres      | User Input   | 30      | 74.1316       |
| Conversion from Kilometer’s to meter’s | User Input   | 34      | 34000         |
| Conversion from inch to Centimeters    | User Input   | 19      | 48.26         |
| Conversion from Kilometer’s to meter’s | User Input   | 16      | 16000         |
| Conversion from Hectares to Acres      | User Input   | 17      | 42.0079       |
| Conversion from inch to Centimeters    | User Input   | 17      | 43.18         |




#### TEST PLAN(SUBTRACTION)

| TEST\_ID | DESCRIPTION | EXPECTED INPUT | EXPECTED OUTPUT | TYPE OF TEST |
| ------ | ------ | ------ | ------ |------|
|T_01_LL_02_HL_02 |Checking the subtraction of two positive numbers. |Numbers X,Y are positive|Output will be either positive or negative|Requirement based test |
|T_02_ LL_02_HL_02 |Checking the subtraction of first number which is greater than second number. |Number x>y| Output is positive| Requirement based test |
|T_03_ LL_02_HL_02 |Checking the subtraction of second number which is greater than first number. | Number x<y|Output is negative| Requirement based test |
|T_04_ LL_02_HL_02 |Checking the subtraction of both equal number.| Number x=y|Output will be zero| Requirement based test |



#### TEST PLAN (MULTIPLICATION)

| **Test Id** | **Description** | **Expected input** | **Expected Output** || Description            | Precondition | Expected i/p | Excepted o/p    |
|------------------------|--------------|--------------|-----------------|
| div of two no          | user i/p     | 4,2          | 0               |
| div of two negative no | user i/p     | -4,-2        | not correct i/p |
| --- | --- | --- | --- |
| T\_01\_LL\_04\_HL\_02 | Checking the product of two positive numbers. | Numbers a &amp; bgreater than zero | Product greater than zero |
| T\_02\_LL\_04\_HL\_02 | Checking the product of two negative numbers. | Numbers a &amp; b less than zero | Product greater than zero |
| T\_03\_LL\_04\_HL\_02 | Checking the product of one positive and one negative number | Number a less than zero &amp; number b greater than zero | Product less than zero |
| T\_04\_LL\_04\_HL\_02 | Checking the product of one positive and one negative number | Number a greater than zero &amp; number b less than zero | Product less than zero |
#### Test plan for Division
| Description            | Precondition | Expected i/p | Excepted o/p    |
|------------------------|--------------|--------------|-----------------|
| div of two no          | user i/p     | 4,2          | 0               |
| div of two negative no | user i/p     | -4,-2        | not correct i/p |

Test plan for Bit Opertions:
 Description                 | Precondition | Expected i/p | Expected o/p |
|-----------------------------|--------------|--------------|--------------|
| operation for unsigned int (&) | user input   | 60,13        | 12           |
| operation for unsigned int (|)| user input   | 60,13        | 61           |
| operation for unsigned int  | user input   | 60,13        | 49           |
| operation for unsigned int  | user input   | 60,13        | -61          |
| operation for unsigned int  | user input   | 60,13        | 240          |
| operation for unsigned int  | user input   | 60,13        | 15           |
