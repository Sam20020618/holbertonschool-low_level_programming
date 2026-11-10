#include "main.h"

/**
 * _puts2 - prints a string for each other letter
 * description : Print every second letter of a string
 * @str: The string of letters
 * Return: returns nothing
 */

void puts2(char *str)
{
int i;
i = 0;
while (*str != '\0')
{
if (i % 2 == 0)
{
_putchar(*str);
}
i++;
str++;
}
_putchar('\n');
}
