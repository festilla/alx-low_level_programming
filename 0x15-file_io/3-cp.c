#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
* create_buffer - Allocates 1024 bytes for a buffer.
* @file: The name of the file the buffer
* is storing characters for.
*
* Return: A pointer to the newly-allocated buffer.
*/
char *create_buffer(char *file)
{
char *buf;
buf = malloc(sizeof(char) * 1024);
if (buf == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (buf);
}

/**
* close_file - Closes file descriptors.
* @fd: The file descriptor to be closed.
*/
void close_file(int fd)
{
int c;
c = close(fd);
if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
* main - Copies the contents of a file to another file.
* @ac: The number of arguments supplied to the program.
* @av: An array of pointers to the arguments.
*
* Return: 0 on success.
*
* Description: If the argument count is
* incorrect - exit code 97.
* If file_from does not exist or cannot
* be read - exit code 98.
* If file_to cannot be created or
* written to - exit code 99.
* If file_to or file_from cannot
* be closed - exit code 100.
*/
int main(int ac, char *av[])
{
int f, t, r, w;
char *buf;
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buf = create_buffer(av[2]);
f = open(av[1], O_RDONLY);
r = read(f, buf, 1024);
t = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (f == -1 || r == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", av[1]);
free(buf);
exit(98);
}
w = write(t, buf, r);
if (t == -1 || w == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", av[2]);
free(buf);
exit(99);
}
r = read(f, buf, 1024);
t = open(av[2], O_WRONLY | O_APPEND);
} while (r > 0);
free(buf);
close_file(f);
close_file(t);
return (0);
}
