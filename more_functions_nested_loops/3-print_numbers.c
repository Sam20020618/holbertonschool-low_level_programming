#include "main.h"

/**
 * print_numbers - prints number 0-9
 * Return: nothing
 */

void print_numbers(void)
{
int count;
count = 0;
while (count < 10)
{
_putchar('0' + count);
count++;
}
_putchar('\n');
}
