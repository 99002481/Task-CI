#include <smart_calculator_operations.h>
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
  return operand1 * factorial(operand1-1);
}

int positive(int operand1)
{
	if(operand1>0)
		return 1;
}

int negative(int operand1)
{
	if(operand1<0)
		return -1;
}

int zero(int operand1)
{
	if(operand1==0)
		return 0;
}

int square_area(int operand1)
{
	return operand1*operand1;
}
int square_per(int operand1)
 {
	return 4*operand1;
}

int rectangle_area(int operand1, int operand2)
 {
	return operand1*operand2;
}

int rectangle_per(int operand1, int operand2)
 {
	return 2*operand1+2*operand2;
}

int circle_area(int operand1)
{
	return 3.14*operand1*operand1;
}
int circle_per(int operand1)
{
	return 2*3.14*operand1;
}

int rem(int operand1, int operand2)
{
	return operand1%operand2;
}

int isangstrom(int operand1)
{
    int temp_operand,loop_var=0,remainder=0,result=0;
    for (temp_operand = operand1; temp_operand != 0; ++loop_var)
    {
       temp_operand /= 10;
    }

   for (temp_operand = operand1; temp_operand != 0; temp_operand /= 10)
   {
       remainder = temp_operand % 10;

      // store the sum of the power of individual digits in result
      result +=(remainder*remainder*remainder);
   }

   // if num is equal to result, the number is an Armstrong number
   if ((int)result == operand1)
    return 1;
   else
    return 0;
}    

int sqr(int operand1)
{
	return operand1*operand1;
}

int cbe(int operand1)
{
	return operand1*operand1*operand1;
}

