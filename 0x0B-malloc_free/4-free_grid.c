#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* free_grid - Free the memory allocated for a 2D array.
* @grid: The 2D grid to be freed.
* @height: The height dimension of the grid.
*
* Description: This function frees the memory associated with a 2D array.
*
* Return: Nothing.
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
