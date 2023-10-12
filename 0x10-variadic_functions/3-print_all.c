#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - Prints various types of data.
* @format: A format string that specifies the types of arguments.
*/
void print_all(const char * const format, ...)
{
int index = 0;
char *string, *separator = "";
va_list args;
va_start(args, format);
if (format)
{
while (format[index])
{
switch (format[index])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 's':
string = va_arg(args, char *);
if (!string)
string = "(nil)";
printf("%s%s", separator, string);
break;
default:
index++;
continue;
}
separator = ", ";
index++;
}
}
printf("\n");
va_end(args);
}
