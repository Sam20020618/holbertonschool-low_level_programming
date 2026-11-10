#include "main.h"

/**
 * *_atoi - prints only number
 * @s, src: The array
 * Return: returns 0
 */

int _atoi(char *s)
{
int set;
int count;

set = 1;
count = 0;

while (s[i] != '\0')
{
if (s[i] == '-' && s[i + 1] >= '0' && s[i + 1] <= '9')
{
set = -1;
}
if (s[i] >= '0' && s[i] <= '9')
{
count = count * 10 + (s[i] - '0');
}
}
if (set == -1)
{
return (-count);
}
return (count);
}
