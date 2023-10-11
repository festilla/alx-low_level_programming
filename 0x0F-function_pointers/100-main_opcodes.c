#include <stdio.h>
#include <stdlib.h>

/**
* main - Print the opcodes of its own program.
* @argc: The number of command-line arguments.
* @argv: An array of command-line argument strings.
*
* Return: Always 0 (Success).
*/
int main(int argc, char *argv[])
{
int numBytes, i;
char *byteArray;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
numBytes = atoi(argv[1]);
if (numBytes < 0)
{
printf("Error\n");
exit(2);
}
byteArray = (char *)main;
for (i = 0; i < numBytes; i++)
{
if (i == numBytes - 1)
{
printf("%02hhx\n", byteArray[i]);
break;
}
printf("%02hhx ", byteArray[i]);
}
return (0);
}
