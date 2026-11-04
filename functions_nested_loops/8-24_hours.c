#include "main.h"

/**
 * jack_bauer - tells the absolute value of an integer
 * Return: returns n
 */

void jack_bauer(void)
{
int min1;
min1 = 0;
int min2;
min2 = 0;
int sec1;
sec1 = 0;
int sec2;
sec2 = 0;

while (min1 < 24)
{
sec1 = 0;
sec2 = 0;
while (sec1 < 60)
{
if (sec2 < 10)
{
sec1++;
sec2 = 0;
}
_putchar('0' + min1);
_putchar('0' + min2);
_putchar(':');
_putchar('0' + sec1);
_putchar('0' + sec2);
_putchar('\n');
sec2++;
}
min2++;
if (min2 < 10)
{
min1++;
min2 = 0;
}
}

}
