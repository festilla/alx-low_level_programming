#include "main.h"
#include <stdlib.h>
/**
* argstostr - Concatenate an array of strings into a single string.
* @ac: The number of strings in the array.
* @av: The array of strings.
*
* Return: A pointer to the concatenated string, or NULL.
*/
char *argstostr(int ac, char **av)
{
int i, n, total_length = 0, index = 0;
char *result;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
{
total_length++;
}
}
total_length += ac;
result = malloc(sizeof(char) * (total_length + 1));
if (result == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
{
result[index++] = av[i][n];
}
if (i < ac - 1)
{
result[index++] = '\n';
}
}
result[index] = '\0';
return (result);
}
