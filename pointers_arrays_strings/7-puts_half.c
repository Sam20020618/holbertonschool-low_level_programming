#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: The string of letters
 * Return: returns nothing
 */

void puts_half(char *str)
{
int count;
int half;
int i = 0;
i = 0;
half = 0;
count = 0;

while (*str != '\0')
{
count++;
str++;
}
half = (count + 1) / 2;
str -= count;
while (*str != '\0')
{
if (i >= half)
{
_putchar(*str);
}
i++;
str++;
}
_putchar('\n');
}
