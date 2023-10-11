#include "3-calc.h"

/* Function prototypes for arithmetic operations */
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int modulo(int a, int b);

/**
* add - Compute the sum of two numbers.
* @a: The first number.
* @b: The second number.
* Return: The sum of 'a' and 'b'.
*/
int add(int a, int b)
{
return (a + b);
}
/**
* subtract - Compute the difference between two numbers.
* @a: The first number.
* @b: The second number.
* Return: The difference between 'a' and 'b'.
*/
int subtract(int a, int b)
{
return (a - b);
}
/**
* multiply - Compute the product of two numbers.
* @a: The first number.
* @b: The second number.
* Return: The product of 'a' and 'b'.
*/
int multiply(int a, int b)
{
return (a * b);
}
/**
* divide - Compute the division of two numbers.
* @a: The dividend.
* @b: The divisor.
* Return: The quotient of 'a' divided by 'b'.
*/
int divide(int a, int b)
{
return (a / b);
}
/**
* modulo - Compute the remainder of the division of two numbers.
* @a: The dividend.
* @b: The divisor.
* Return: The remainder of 'a' divided by 'b'.
*/
int modulo(int a, int b)
{
return (a % b);
}
