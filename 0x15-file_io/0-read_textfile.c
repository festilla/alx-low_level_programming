#include "main.h"
#include <stdlib.h>

/**
* read_textfile - Reads a text file and
* outputs it to the standard output.
* @f: A pointer to the file's name.
* @l: The number of characters to read and print.
*
* Return: If the function fails or f is NULL - 0.
* Otherwise, the number of characters
* successfully read and printed.
*/
ssize_t read_textfile(const char *f, size_t l)
{
ssize_t o, r, w;
char *b;
if (f == NULL)
return (0);
b = malloc(sizeof(char) * l);
if (b == NULL)
return (0);
o = open(f, O_RDONLY);
r = read(o, b, l);
w = write(STDOUT_FILENO, b, r);
if (o == -1 || r == -1 || w == -1 || w != r)
{
free(b);
return (0);
}
free(b);
close(o);
return (w);
}
