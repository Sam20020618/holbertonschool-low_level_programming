#include "main.h"

/**
 * jack_bauer - prints every min of the day
 * Return: returns n
 */

void jack_bauer(void)
{
int min;
int hour;

min = 0;
hour = 0;

while (hour < 24)
{
while (min < 60)
{
_putchar('0' + (hour / 10));
_putchar('0' + (hour % 10));
_putchar(':');
_putchar('0' + (min / 10));
_putchar('0' + (min % 10));
_putchar('\n');
min++;
}
hour++;
min = 0;
}

}
