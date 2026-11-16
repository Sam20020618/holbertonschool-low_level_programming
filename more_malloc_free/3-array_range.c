#include "main.h"
/**
* *array_range - create an array with min and max
* @min: The first number
* @max: The last number
* Return: ar
*/

int *array_range(int min, int max)
{
int *ar;
int i;

if (min > max)
{
return (NULL);
}
ar = malloc((max - min + 1) * sizeof(int));
if (ar == NULL)
{
return (NULL);
}
if (min == max)
{
ar[0] = min;
}

for (i = 0; min < max; i++)
{
ar[i] = min;
min++;
}

return (ar);
}
