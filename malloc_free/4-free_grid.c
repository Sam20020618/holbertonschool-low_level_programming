#include "main.h"
/**
* free_grid - clears the grid
* @grid: The grid that needs clearing
* @height: The height of the grid
* Return: nothing
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
