#include "main.h"

/**
 * more_numbers - prints number 0-14
 * Return: nothing
 */

void more_numbers(void)
{
int count;
int finalCount;

count = 0;
finalCount = 0;
while (finalCount < 10)
{
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
finalCount++;
count = 0;
}
}
