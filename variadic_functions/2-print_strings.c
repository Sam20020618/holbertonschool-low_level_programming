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
char *str;
i = 0;
va_start(ap, n);

for (i = 0; i < n; i++)
{
str = va_arg(ap, char *);
if (str == NULL)
{
printf("(nil)");
}
else if (i == n - 1 || separator == NULL)
{
printf("%s", str);
}
else
{
printf("%s%s", str, separator);
}
}
printf("\n");
va_end(ap);
}
