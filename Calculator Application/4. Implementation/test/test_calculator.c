#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#define PROJECT_NAME    "Calculator_Application"
/* Modify these two lines according to the project */
//#include <calculator_operations.h>
#include<addition.h>
#include<subtaction.h>
#include<mul.h>
#include<division.h>
#include<expo.h>
#include<factorial.h>
#include<bitoperations.h>
#include<hectaretoacre.h>
#include<inchtocentimeter.h>
#include<kmtometer.h>
#include<modulo.h>
#include<ncr.h>
#include<npr.h>
#include<percentage.h>
 
//#define PROJECT_NAME    "Calculator_Application"

/* Prototypes for all the test functions */
void test_add(void);
void test_sub(void);
void test_multiplication(void);
void test_division(void);
void test_exponential(void);

void test_factorial(void);
void test_modulo(void);

void test_kmtometer(void);
//void test_centitoinch(void);
void test_inchtocentimeter(void);
void test_ncr(void);
void test_npr(void);
void test_percentage(void);

int main() {

  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "sub", test_sub);
  CU_add_test(suite, "multiplication", test_multiplication);
  CU_add_test(suite, "division", test_division);
  CU_add_test(suite, "exponential", test_exponential);
  CU_add_test(suite, "factorial", test_factorial);
  CU_add_test(suite, "modulo", test_modulo);
  CU_add_test(suite, "kmtometer", test_kmtometer);
  CU_add_test(suite, "inchtocentimeter", test_inchtocentimeter);
  CU_add_test(suite, "ncr",test_ncr);
  CU_add_test(suite, "npr",test_npr);
  CU_add_test(suite, "percentage",test_percentage);



  CU_basic_set_mode(CU_BRM_VERBOSE);


  CU_basic_run_tests();


  CU_cleanup_registry();

  return 0;
}

/* Start of the application test */
//int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  
/*  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END 
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "sub", test_sub);
  CU_add_test(suite, "multiplication", test_multiplication);
  CU_add_test(suite, "division", test_division);
  CU_add_test(suite, "exponential", test_exponential);
  //CU_add_test(suite, "square", test_square);
  //CU_add_test(suite, "prime", test_prime);
 // CU_add_test(suite, "smaller", test_smaller);
  //CU_add_test(suite, "greater", test_greater);
  CU_add_test(suite, "factorial", test_factorial);
  CU_add_test(suite, "modulo", test_modulo);
  //CU_add_test(suite, "squareroot", test_squareroot);
  //CU_add_test(suite, "sinvalue", test_sinvalue);
  //CU_add_test(suite, "cosvalue", test_cosvalue);
  //CU_add_test(suite, "tanvalue", test_tanvalue);
  //CU_add_test(suite, "centitometer", test_centitometer);
  //CU_add_test(suite, "metertocenti", test_metertocenti);
  //CU_add_test(suite, "metertokm", test_metertokm);
  CU_add_test(suite, "kmtometer", test_kmtometer);
  CU_add_test(suite, "inchtocentimeter", test_inchtocentimeter);
  //CU_add_test(suite, "centitoinch", test_centitoinch);
  CU_add_test(suite, "ncr",test_ncr);
  CU_add_test(suite, "npr",test_npr);
  CU_add_test(suite, "percentage",test_percentage);






/* Write all the test functions */ 
void test_add(void) {
  CU_ASSERT(30 == add(10, 20));
  CU_ASSERT(-30 == add(-10, -20));
  CU_ASSERT(0 == add(10, -10));
  CU_ASSERT(-10 == add(10, -20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == add(750, 7500));
}

void test_sub(void) {
  CU_ASSERT(-3 == sub(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == sub(1000, 900));
}

void test_multiplication(void) {
  CU_ASSERT(0 == multiplication(1, 0));
  CU_ASSERT(4 == multiplication(-2, -2));
  CU_ASSERT(-10 == multiplication(-5, 2));
  CU_ASSERT(-200 == multiplication(50, -4));
  
  /* Dummy fail*/
  CU_ASSERT(2 == multiplication(2, 5));
}

void test_division(void) {
  CU_ASSERT(2 == division(10, 5));
  
  /* Dummy fail*/
  CU_ASSERT(3 == division(2, 2));
}

void test_exponential(void){
  
  CU_ASSERT(100 == exponential(10, 2));
  CU_ASSERT(0.5 == exponential(2, -1));
  CU_ASSERT(1 == exponential(6, 0));

  
  /* Dummy fail*/
  CU_ASSERT(3 == exponential(2, 2));
  //CU_ASSERT(0.6 == exponential(3, -1);
  CU_ASSERT(10 == exponential(10, 0));
}




void test_factorial(void) {
  CU_ASSERT(1 == factorial(0));
  CU_ASSERT(1 == factorial(1));
  CU_ASSERT(6 == factorial(3));
  CU_ASSERT(40320 == factorial(8));
  /* Dummy fail*/
  CU_ASSERT(23 == factorial(15));
  CU_ASSERT(23 == factorial(100));
  CU_ASSERT(10 == factorial(-3));
}

void test_modulo(void) {
  CU_ASSERT(5 == modulo(105,10));
  
  /* Dummy fail*/
  CU_ASSERT(5 == modulo(25,5));
}




void test_inchtocentimeter(void) {
  CU_ASSERT(254 == inchtocentimeter(100));
  
  /* Dummy fail*/
  CU_ASSERT(1 == inchtocentimeter(12));
}
void test_ncr(void) {
  CU_ASSERT(35 == ncr(7,3));
  CU_ASSERT(10 == ncr(5,2));
  CU_ASSERT(1 == ncr(4,0));
  CU_ASSERT(252 == ncr(10,5));
  
  /* Dummy fail*/
  CU_ASSERT(0 == ncr(6,6));
}
void test_npr(void) {
  CU_ASSERT(210 == npr(7,3));
  CU_ASSERT(6720== npr(8,5));
  CU_ASSERT(1 == npr(4,0));
  CU_ASSERT(9 == npr(9,1));
  
  /* Dummy fail*/
  CU_ASSERT(0 == npr(6,6));
}

void test_percentage(void) {
  CU_ASSERT(10 == percentage(10 ,100));
  
  /* Dummy fail*/
   CU_ASSERT(30 == percentage(10 ,100));
}
