#include "main.h"

/**
 * print_last_digit - tells the absolute value of an integer
 * @n: The number to check
 * Return: returns n
 */

int print_last_digit(int n)
{
int lastDig;
lastDig = n % 10;
_putchar('0' + lastDig);
return (lastDig);
}
