#include "variadic_functions.h"

/**
 * print_numbers - Print all number with char
 * @separator: The char between the numbers
 * @n: The amount of numbers
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
i = 0;
va_start(ap, n);

for (i = 0; i < n; i++)
{
if (i == n - 1 || separator == NULL)
{
printf("%d", va_arg(ap, int));
}
else
{
printf("%d%s", va_arg(ap, int), separator);
}
}
printf("\n");

va_end(ap);
}
