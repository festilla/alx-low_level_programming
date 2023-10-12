#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - Calculates the sum of a variable number of parameters.
* @n: The count of parameters to sum.
* @...: A variable number of parameters to be summed.
*
* Return: If n is 0, it returns 0.
*         Otherwise, it returns the sum of all provided parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum = 0;
va_start(ap, n);
for (i = 0; i < n; i++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
