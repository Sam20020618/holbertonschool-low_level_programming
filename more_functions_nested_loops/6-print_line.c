#include "main.h"

/**
 * print_line - prints a line
 * @n: The lines size
 * Return: returns nothing
 */

void print_line(int n)
{
int count;
count = 0;
while (count < n)
{
_putchar('_');
count++;
}
_putchar('\n');
}
