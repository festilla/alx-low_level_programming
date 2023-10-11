#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - Iterate through an array and perform an action.
* @array: The array to iterate through.
* @size: The number of elements to process.
* @action: A function pointer for the action to be performed on each element.
* Return: Void.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
