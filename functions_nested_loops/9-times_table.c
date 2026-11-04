#include "main.h"

/**
 * times_table - prints the time table up to x9
 * Return: no return
 */

void times_table(void)
{
int num;
int times;
int answer;

num = 0;
while (num < 10)
{
times = 0;
while (times < 10)
answer = num *times;
if (times == 0)
{
_putchar('0' + answer);
}
else if (answer >= 10)
{
_putchar(',');
_putchar(' ');
_putchar('0' + (answer / 10));
_putchar('0' + (answer % 10));
}
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + answer);
}
times++;
}
times = 0;
num++;
_putchar('\n');
}
