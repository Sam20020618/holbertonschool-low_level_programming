#include "main.h"
#include <stdio.h>

/**
 * _abs - tells the absolute value 
 * Description: uses an if statment to make - into +
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
