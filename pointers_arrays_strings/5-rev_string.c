#include "main.h"

/**
 * rev_string - revreses the string
 * @s: The string to check
 * Return: returns nothing
 */

void rev_string(char *s)
{
char *c;
char hold;
c = s;
while (*c != '\0')
{
c++;
}
c--;
while (s < c)
{
hold = *s;
*s = *c;
*c = hold;
s++;
c--;
}
}
