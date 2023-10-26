#include "main.h"

/**
* flip_bits - Counts the number of bits that need to be changed
* to transform one number into another.
* @number1: The first number.
* @number2: The second number.
*
* Return: The number of bits that need to be changed.
*/
unsigned int flip_bits(unsigned long int number1, unsigned long int number2)
{
int index;
int bit_count = 0;
unsigned long int difference = number1 ^ number2;
for (index = 63; index >= 0; index--)
{
unsigned long int current = difference >> index;
if (current & 1)
bit_count++;
}
return (bit_count);
}
