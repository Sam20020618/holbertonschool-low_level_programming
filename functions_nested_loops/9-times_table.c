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
times = 0;
answer = 0;

while (num  < 10)
{
while (times < 10)
{
answer = num *times;
_putchar('0' + answer);
_putchar(',');
_putchar(' ');
times++;
}
times = 0;
num++;
_putchar('\n');
}
}
