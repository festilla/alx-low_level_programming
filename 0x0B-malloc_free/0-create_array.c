#include "main.h"
#include <stdlib.h>
/**
* create_array - Create an array of a specified size
* @size: The size of the array.
* @c: The character to initialize the array with.
*
* Description: This function creates an array of the specified size
*
* Return: A pointer to the created array, or NULL if memory allocation fails.
*/
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
for (i = 0; i < size; i++)
str[i] = c;
return (str);
}
