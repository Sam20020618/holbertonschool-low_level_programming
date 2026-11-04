#include "main.h"

/**
 * print_sign - prints off a-z using _putchar
 * Description: finds if a number is +,0 or -
 * Return: reutrn 1 if pos, 0 if zero and -1 if neg
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar(+);
return (1);
}
else if (n == 0)
{
_putchar(0);
return (0);
}
else
{
_putchar(-);
return (-1);
}

}
