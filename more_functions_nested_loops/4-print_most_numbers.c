#include "main.h"

/**
 * print_most_numbers - prints number 0-9 expect 2 and 4
 * Return: nothing
 */

void print_most_numbers(void)
{
int count;
count = 0;

while (count < 10)
{
if (count !=  2 && count !=  4)
{
_putchar('0' + count);
}
count++;
}
_putchar('\n');
}
