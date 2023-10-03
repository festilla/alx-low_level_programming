#include "main.h"
#include <stdlib.h>
/**
* str_concat - Concatenate two input strings and return the result.
* @s1: The first input string to concatenate.
* @s2: The second input string to concatenate.
*
* Return: A pointer to the concatenated string, or NULL.
*/
char *str_concat(char *s1, char *s2)
{
char *concatenated;
int len_s1 = 0, len_s2 = 0, i = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len_s1] != '\0')
len_s1++;
while (s2[len_s2] != '\0')
len_s2++;
concatenated = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
if (concatenated == NULL)
return (NULL);
len_s1 = 0;
while (s1[len_s1] != '\0')
{
concatenated[i] = s1[len_s1];
i++, len_s1++;
}
len_s2 = 0;
while (s2[len_s2] != '\0')
{
concatenated[i] = s2[len_s2];
i++, len_s2++;
}
concatenated[i] = '\0';
return (concatenated);
}
