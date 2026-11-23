#include "function_pointers.h"

/**
 * int_index - prints the elements of the array
 * @array: The array
 * @size: The size of the array
 * @cmp: The pointer for the function
 *
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
int result;
result = 0;
if (array != NULL && cmp != NULL && size <= 0)
{
for (i = 0; i < size; i++)
{
result += cmp(array[i]);
}
}
else
{
return (-1);
}
return (0);
}
