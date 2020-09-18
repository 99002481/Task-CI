#ifndef CALCULATOR_OPERATIONS_H_INCLUDED
#define CALCULATOR_OPERATIONS_H_INCLUDED
/**
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __CALCULATOR_OPERATIONS_H__
#define __CALCULATOR_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int add(int operand1, int operand2);

int subtract(int operand1, int operand2);

int multiply(int operand1, int operand2);

int divide(int operand1, int operand2);

int prime(int operand1);

int evenodd(int operand1);

int factorial(int operand1);

int positive(int operand1); 

int negative(int operand1); 

int zero(int operand1); 

#endif  /* #define __CALCULATOR_OPERATIONS_H__ */


#endif // CALCULATOR_OPERATIONS_H_INCLUDED
