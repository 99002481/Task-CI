#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <smart_calculator_operations.h>
#define PROJECT_NAME    "Smart Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_prime(void);
void test_even(void);
void test_odd(void);
void test_factorial(void);
void test_positive(void);
void test_negative(void);
void test_zero(void);
void test_sqar(void);
void test_sqper(void);
void test_recar(void);
void test_recper(void);
void test_cirar(void);
void test_cirper(void);
void test_rem(void);
void test_isangstrom(void);
void test_sqr(void);
void test_cbe(void);
void test_sqroot(void);
void test_pwr(void);
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
  CU_add_test(suite, "subtract", test_subtract);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "prime", test_prime);
  CU_add_test(suite, "evenodd", test_even);
  CU_add_test(suite, "evenodd", test_odd);
  CU_add_test(suite, "factorial", test_factorial);
  CU_add_test(suite, "positive", test_positive);
  CU_add_test(suite, "negative", test_negative);
  CU_add_test(suite, "zero", test_zero);
  CU_add_test(suite, "square_area", test_sqar);
  CU_add_test(suite, "square_per", test_sqper);
  CU_add_test(suite, "rectangle_area", test_recar);
  CU_add_test(suite, "rectangle_per", test_recper);
  CU_add_test(suite, "circle_area", test_cirar);
  CU_add_test(suite, "circle_per", test_cirper);
  CU_add_test(suite, "rem", test_rem);
  CU_add_test(suite, "isangstrom", test_isangstrom);
  CU_add_test(suite, "sqr", test_sqr);
  CU_add_test(suite, "cbe", test_cbe);
  CU_add_test(suite, "squareroot", test_sqroot);
  CU_add_test(suite, "pwr", test_pwr);
  
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
void test_add(void) 
{
  CU_ASSERT(30 == add(10, 20));
}

void test_subtract(void) 
{
  CU_ASSERT(-3 == subtract(0, 3));
}

void test_multiply(void) 
{
  CU_ASSERT(0 == multiply(1, 0));
}

void test_divide(void) 
{
  CU_ASSERT(0 == divide(1, 0));
}

void test_prime(void)
 {
   CU_ASSERT(-1 == prime(5));
   CU_ASSERT(1 == prime(4));
 }

void test_even(void)
{
  CU_ASSERT(1 == evenodd(2));
}

void test_odd(void)
{
  CU_ASSERT(0 == evenodd(3));
}

void test_factorial(void)
{
  CU_ASSERT(120== factorial(120));
}

void test_positive(void)
{
  CU_ASSERT(1== positive(1));
}

void test_negative(void)
{
  CU_ASSERT(-1 == negative(-2));
}

void test_zero(void)
{
  CU_ASSERT(0== zero(0));
}

void test_sqar(void) 
{
  CU_ASSERT(100 == square_area(10));
}

void test_sqper(void) 
{
  CU_ASSERT(40 == square_per(10));
}
void test_recar(void) 
{
  CU_ASSERT(50 == rectangle_area(10,5));
}
void test_recper(void) 
{
  CU_ASSERT(30 == rectangle_per(10,5));
}
void test_cirar(void) 
{
  CU_ASSERT(314 == circle_area(10));

}
void test_cirper(void) 
{
  CU_ASSERT(62 == circle_per(10));

}
void test_rem(void)
{
  CU_ASSERT(0==remainder(10,2));
}

void test_isangstrom(void)
{
  CU_ASSERT(1==isangstrom(153));
}

void test_sqr(void)
{
  CU_ASSERT(4==sqr(2));
}

void test_cbe(void)
{
  CU_ASSERT(8==cbe(2));
}

void test_sqroot(void)
{
  CU_ASSERT(8==squareroot(16));
}

void test_pwr(void)
{
  CU_ASSERT(4==pwr(2,2));
}
