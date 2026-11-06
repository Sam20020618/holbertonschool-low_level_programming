#include "main.h"

/**
 * more_numbers - prints number 0-14
 * Return: nothing
 */

void more_numbers(void)
{
int count;
count = 0;
while (count < 15)
{
if (count >= 10)
{
_putchar('0' + count / 10);
}
_putchar('0' + count % 10);
count++;
}
_putchar('\n');
}
