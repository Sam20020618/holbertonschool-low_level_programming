#include "main.h"

/**
 * _puts - prints a string
 * @str: The string of letters
 * Return: returns nothing
 */

void _puts(char *str)
{
int i;
i = 0;
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
