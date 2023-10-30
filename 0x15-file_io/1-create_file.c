#include "main.h"

/**
* create_file - Create a file.
* @f: A pointer to the file name.
* @c: A pointer to content to write.
*
* Return: If the function fails - -1.
* Otherwise - 1.
*/

int create_file(const char *f, char *c)
{
int o, w, l = 0;
if (f == NULL)
return (-1);
if (c != NULL)
{
for (l = 0; c[l];)
l++;
}
o = open(f, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(o, c, l);
if (o == -1 || w == -1)
return (-1);
close(o);
return (1);
}
