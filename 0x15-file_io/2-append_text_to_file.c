#include "main.h"

/**
* append_text_to_file - Appends text to the end of a file.
* @f: A pointer to the file name.
* @c: The string to add to the end of the file.
*
* Return: If the function fails or
* the filename is NULL, return -1.
* If the file doesn't exist or the user lacks
* write permissions, return -1.
* Otherwise, return 1.
*/

int append_text_to_file(const char *f, char *c)
{
int o, w, l = 0;
if (f == NULL)
return (-1);
if (c != NULL)
{
for (l = 0; c[l];)
l++;
}
o = open(f, O_WRONLY | O_APPEND);
w = write(o, c, l);
if (o == -1 || w == -1)
return (-1);
close(o);
return (1);
}
