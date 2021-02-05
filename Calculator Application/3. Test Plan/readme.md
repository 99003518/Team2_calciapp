#### TEST PLAN (FACTORIAL)
| ID |Description | Expected input or state | Expected output or State |Type of test|
| ------ | ------ | ------ | ------ |------|
|T_01_LL_06_HL_02 |Check whether the input is less than 0 |N= -3 |Error message | Requirement based test|
|T_02_ LL_06_HL_02 |Check whether the input is 0| N= 0 |1 |Requirement based test|
|T_03_ LL_06_HL_02 |Check whether the input is 1 |N=1 |1 |Requirement based test|
|T_04_ LL_06_HL_02 |Check whether the input is greater than 0 but less than 11| N= 8 |40,320|Requirement based test|
|T_03_ LL_06_HL_02 |Check whether the input is greater than 11 |N=23 |Error message |Boundary based test|

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
| Conversion from Kilometer’s to meter’s | User Input   | 12      | 12000         |
| Conversion from inch to Centimeters    | User Input   | 12      | 30.48         |
| Conversion from Hectares to Acres      | User Input   | 12      | 29.6526       |


#### TEST PLAN (MULTIPLICATION)

| **Test Id** | **Description** | **Expected input** | **Expected Output** |
| --- | --- | --- | --- |
| T\_01\_LL\_04\_HL\_02 | Checking the product of two positive numbers. | Numbers a &amp; bgreater than zero | Product greater than zero |
| T\_02\_LL\_04\_HL\_02 | Checking the product of two negative numbers. | Numbers a &amp; b less than zero | Product greater than zero |
| T\_03\_LL\_04\_HL\_02 | Checking the product of one positive and one negative number | Number a less than zero &amp; number b greater than zero | Product less than zero |
| T\_04\_LL\_04\_HL\_02 | Checking the product of one positive and one negative number | Number a greater than zero &amp; number b less than zero | Product less than zero |

