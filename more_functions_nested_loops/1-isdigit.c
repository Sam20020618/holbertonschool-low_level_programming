#include "main.h"

/**
 * _isdigit - tell if c is a number or not
 * @c: The character to check
 * Return: returns 1 if digit else return 0
 */

int _isdigit(int c)
{
int num;
int cNum;

 cNum = c - '0';
num = 0;

while (num < 10)
{
if (c == num)
{
return (1);
}
num++;
}

return (0);
}
