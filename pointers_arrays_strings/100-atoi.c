#include "main.h"

/**
 * *_atoi - prints only number
 * @s: The array
 * Return: returns 0
 */

int _atoi(char *s)
{
int set;
int count;
int i;
int counted;

set = 1;
count = 0;
i = 0;
counted = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
{
set *= -1;
}
else if (s[i] >= '0' && s[i] <= '9')
{
counted = 1;
count = count * 10 + (s[i] - '0');
}
else if (counted)
{
break;
}
i++;
}

if (set == -1)
{
return (-count);
}
return (count);
}
