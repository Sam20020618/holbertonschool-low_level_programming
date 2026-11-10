#include "main.h"

/**
 * print_array - print the number of a certain array
 * @a: The array set
 * @n: number of the set to check
 * Return: returns nothing
 */

void print_array(int *a, int n)
{
int i;
i = 0;
while (i < n)
{
printf("%d", *a);
a++;
i++;
}
printf("\n");
}
