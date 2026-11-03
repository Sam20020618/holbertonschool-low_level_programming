#include "main.h"

/**
 * print_alphabet - prints off a-z using _putchar
 * Description: uses _putchar to print each letter in while
 * Return: Always 0.
 */

int print_sign(int n)
{
if (n > 0)
{
printf("+ if %d is greater than zero\n", n);
return (1); 
}
else if (n == 0)
{
printf("0 if %d is zero\n", n);
return (0);
}
else
{
printf("- if %d is less than zero\n", n);
return (-1)
}

}
