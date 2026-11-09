#include "main.h"

/**
 * swap_int - prints the last digit
 * @a: The number to check
 * @b: The number to check
 * Return: no return
 */

void swap_int(int *a, int *b)
{
int hold;
hold = *a;
*a = *b;
*b = hold;
}
