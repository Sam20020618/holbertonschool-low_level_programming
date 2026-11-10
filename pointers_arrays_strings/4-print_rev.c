#include "main.h"

/**
 * print_rev - print the word in reverse
 * @s: The string of words
 * Return: return nothing
 */

void print_rev(char *s)
{
int count;
int i;
count = 0;
i = 0;

while (*s != '\0')
{
count++;
s++;
}
*s--;
while (i < count)
{
_putchar(*s);
s--;
i++;
}
_putchar(\n);
}
