#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - Calculate the minimum number of coins to
* @argc: Number of arguments
* @argv: Array of arguments
*
* Return: 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
int amount, j, coinCount;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
amount = atoi(argv[1]);
coinCount = 0;
if (amount < 0)
{
printf("0\n");
return (0);
}
for (j = 0; j < 5 && amount >= 0; j++)
{
while (amount >= coins[j])
{
coinCount++;
amount -= coins[j];
}
}
printf("%d\n", coinCount);
return (0);
}
