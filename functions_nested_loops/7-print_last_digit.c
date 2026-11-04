#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: The number to check
 * Return: returns n
 */

int print_last_digit(int n)
{
int lastDig;
lastDig = n % 10;
if (lastDig < 0)
{
lastDig = -lastDig;
}
_putchar('0' + lastDig);
return (lastDig);
}
