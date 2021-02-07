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
//void test_square(void);
//void test_prime(void);
//void test_smaller(void);
//void test_greater(void);
void test_factorial(void);
void test_modulo(void);
//void test_squareroot(void);
//void test_sinvalue(void);
//void test_cosvalue(void);
//void test_tanvalue(void);
//void test_centitometer(void);
//void test_metertocenti(void);
//void test_metertokm(void);
void test_kmtometer(void);
//void test_centitoinch(void);
void test_inchtocentimeter(void);
void test_ncr(void);
void test_npr(void);
void test_percentage(void);



/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
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




/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_add(void) {
  CU_ASSERT(30 == add(10, 20));
  
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

/*void test_square(void) {
  CU_ASSERT(100 == square(10));
  
  /* Dummy fail
  CU_ASSERT(1500 == square(25));
}*/

/*void test_prime(void) {
  CU_ASSERT(1 == prime(89));
  CU_ASSERT(-1 == prime(-12))
  
  /* Dummy fail
  CU_ASSERT(0 == prime(97));
}

void test_smaller(void) {
  CU_ASSERT(10 == smaller(10,20));
  
  /* Dummy fail
  CU_ASSERT(25 == smaller(25,5));
}

void test_greater(void) {
  CU_ASSERT(20 == greater(10,20));
  
  
  /*CU_ASSERT(5 == greater(25,5));
}*/

void test_factorial(void) {
  CU_ASSERT_EQUAL(1 == factorial(0));
  CU_ASSERT_EQUAL(1 == factorial(1));
  CU_ASSERT_EQUAL(6 == factorial(3));
  CU_ASSERT_EQUAL(40320 == factorial(8));
  /* Dummy fail*/
  CU_ASSERT_EQUAL(23 == factorial(15));
  CU_ASSERT_EQUAL(23 == factorial(100));
  CU_ASSERT(10 == factorial(-3));
}

void test_modulo(void) {
  CU_ASSERT(5 == modulo(105,10));
  
  /* Dummy fail*/
  CU_ASSERT(5 == modulo(25,5));
}

/*void test_squareroot(void) {
  CU_ASSERT(3 == squareroot(9));
  
  /* Dummy fail
  CU_ASSERT(1 == squareroot(100));
}

void test_sinvalue(void) {
  CU_ASSERT(0 == sinvalue(0));
  
  /* Dummy fail
  CU_ASSERT(1 == sinvalue(12));
}

void test_cosvalue(void) {
  CU_ASSERT(1 == cosvalue(0));
  
  /* Dummy fail
  CU_ASSERT(1 == cosvalue(12));
}

void test_tanvalue(void) {
  CU_ASSERT(1 == tanvalue(45));
  
  /* Dummy fail
  CU_ASSERT(1 == tanvalue(12));
}

void test_metertocenti(void) {
  CU_ASSERT(1200 == metertocenti(12));
  
  /* Dummy fail
  CU_ASSERT(1 == metertocenti(12));
}


void test_centitometer(void) {
  CU_ASSERT(12 == centitometer(1200));
  
  /* Dummy fail
  CU_ASSERT(1 == centitometer(12));
}*/

//void test_kmtometer(void) {
 // CU_ASSERT(1000 == kmtometer(1));
  
  /* Dummy fail
  CU_ASSERT(1 == kmtometer(12));
}

/*void test_metertokm(void) {
  CU_ASSERT(1 == metertokm(1000));
  
  /* Dummy fail
  CU_ASSERT(1 == metertokm(12));
}

void test_centitoinch(void) {
  CU_ASSERT(100 == centitoinch(254));
  
  /* Dummy fail
  CU_ASSERT(1 == centitoinch(12));
}*/

void test_inchtocenti(void) {
  CU_ASSERT(254 == inchtocenti(100));
  
  /* Dummy fail*/
  CU_ASSERT(1 == inchtocenti(12));
}
void test_ncr(void) {
  CU_ASSERT(35 == ncr(7,3));
  CU_ASSERT(10 == ncr(5,2));
  CU_ASSERT(56 == ncr(8,3));
  CU_ASSERT(252 == ncr(10,5));
  
  /* Dummy fail*/
  CU_ASSERT(0 == ncr(6,6));
}
void test_npr(void) {
  CU_ASSERT(210 == npr(7,3));
  CU_ASSERT(6720== npr(8,5));
  CU_ASSERT(12 == npr(4,2));
  CU_ASSERT(1 == npr(9,0));
  
  /* Dummy fail*/
  CU_ASSERT(0 == npr(6,6));
}

void test_percentage(void) {
  CU_ASSERT(10 == percentage(10 ,100));
  
  /* Dummy fail*/
   CU_ASSERT(30 == percentage(10 ,100));
}
