#include "main.h"

/**
 * _isupper - tell if a letter is lower or upper case
 * @c: The character to check
 * Return: returns 1 if letter else return 0
 */

int _isupper(int c)
{
int i;
char cap;

i = 0;
cap = 'A';

while (i < 26)
{
if (c == cap)
{
return (1);
}
i++;
cap++;
}
return (0);
}
