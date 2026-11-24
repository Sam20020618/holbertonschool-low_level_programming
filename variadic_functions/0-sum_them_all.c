#include "variadic_functions.h"

/**
 * sum_them_all - Sum all the numbers
 * @n: The amount of numbers
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
int i;
int sum;
i = 0;
sum = 0;
va_start(ap, n);

if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
sum += va_arg(ap, int);
}
va_end(ap);
return (sum);
}
