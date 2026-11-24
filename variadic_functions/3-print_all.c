#include "variadic_functions.h"

/**
 * print_char - Prints char
 * @ap: va_list to print
 * Return: Nothing
 */
void print_char(va_list ap)
{
printf("%c", va_arg(ap, char);
}

/**
 * print_int - Prints int
 * @ap: va_list to print
 * Return: Nothing
 */
void print_int(va_list ap)
{
printf("%d", va_arg(ap, int));
}

/**
 * print_float - Prints float
 * @ap: va_list to print
 * Return: Nothing
 */
void print_float(va_list ap)
{
printf("%f", va_arg(ap, double));
}

/**
 * print_string - Prints string
 * @ap: va_list to print
 * Return: Nothing
 */
void print_string(va_list ap)
{
char *str;
str = va_arg(ap, char *);
if (str == NULL)
{
printf("(nil)");
}
printf("%s", str);
}
/**
 * print_all - Prints everything
 * @format: The formate of the vaule
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
va_list ap;
int i, j;
char *space;
char types[] = {'c', 'i', 'f', 's', '\0'};
void (*funcs[])(va_list) = {
print_char,
print_int,
print_float,
print_string
};

i = 0;
space = "";

va_start(ap, format);

while (format[i] != '\0')
{
j = 0;
while (types[j] != '\0')
{
if (format[i] == types[j])
{
printf("%s", space);
funcs[j](ap);
space = ", ";
}
j++;
}
i++;
}
printf("\n");
}
