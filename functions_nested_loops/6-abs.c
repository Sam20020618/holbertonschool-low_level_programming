#include "main.h"

/**
 * _abs - tells the absolute value of an integer 
 * @n: The number to check
 * Return: returns n
 */

int _abs(int n)
{
if(n < 0)
{
n+= n + n;
}
return n;
}
