#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
* main - Perform basic arithmetic operations and print the result.
* @argc: The number of arguments provided to the program.
* @argv: An array of pointers to the program's arguments.
*
* Return: Always 0.
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int num1, num2;
char *operator;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
operator = argv[2];
num2 = atoi(argv[3]);
if (get_op_func(operator) == NULL || operator[1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*operator == '/' && num2 == 0) || (*operator == '%' && num2 == 0))
{
