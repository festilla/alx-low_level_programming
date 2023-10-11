#include "function_pointers.h"

/**
* int_index - Find the index of an element in an array.
* @array: The array to search in.
* @size: The size of the array.
* @cmp: A pointer to a comparison function.
* Return: The index of the matching element, or -1 if not found.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
