#include "variadic_functions.h"

/**
 * print_strings - Print all strings with char
 * @separator: The char between the strings
 * @n: The amount of strings
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
i = 0;
va_start(ap, n);

for (i = 0; i < n; i++)
{
if (i == n - 1 || separator == NULL)
{
printf("%s", va_arg(ap, char));
}
else if (va_arg(ap, char) == NULL)
{
printf("(nil)%s", separator);
}
else
{
printf("%s%s", va_arg(ap, char), separator);
}
}
printf("\n");
va_end(ap);
}
