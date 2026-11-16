#include "main.h"
/**
* **alloc_grid - making a grid
* @width: the width of the grind
* @hight: the hight of the grid
* Return: ar
*/

int **alloc_grid(int width, int height)
{
int **ar;
int i;
int j;

if (width <= 0 || height <= 0)
{
return (NULL);
}
ar = malloc(height * sizeof(int *));
if (ar == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
ar[i] = malloc(width * sizeof(int));
if (ar[i] == NULL)
{
return (NULL);
}
for (j = 0; j < width; j++)
{
ar[i][j] = 0;
}
}
return (ar);
}
