#include <calculator_operations.h>
int isprime(int operand1);
int isevenorodd(int operand1);

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}


int prime(int operand1)
{
  int result = isprime(operand1);
  return result;
}

int isprime(int operand1)
{
	int i;
   for(i=2;i<operand1;i++)
  /* checks prime number */
  if(operand1%i== 0)
    break;
  /* Return 1 for prime number */
  if(i>operand1/2)
  return -1;
  else
  return 1;
}

int evenodd(int operand1)
{
	int result= isevenorodd(operand1);
	return result;
}

int isevenorodd(int operand1)
{
	if(operand1%2==0)
		return 1;
	else
		return 0;
}

int factorial(int operand1)
{
  /* Return -1 for negative numbers */
  if(operand1 < 0)
    return -1;

  /* Return 1 for 0 */
  if(operand1 == 0)
    return 1;

  /* Recursively calculate Factorial of the number */
  return number * factorial(number-1);
}

