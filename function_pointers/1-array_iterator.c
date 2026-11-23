#include "function_pointers.h"

/**
 * array_iterator - prints the elements of the array
 * @arry: The array
 * @size: The size of the array
 * @action: The pointer for the function
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
if (arry != NULL && size > 0 && action != NULL)
{
action(array);
}
}
