#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: checks how many lines
 * Return: nothing
 */

void print_diagonal(int n)
{
int count;
int space;
int spaceNum;

count = 0;
space = 0;
spaceNum = 0;

while (count < n && count > -1)
{
while (spaceNum < space)
{
_putchar(' ');
spaceNum++;
}
_putchar('\\');
_putchar('\n');
count++;
space++;
spaceNum = 0;
}
if (count == 0)
{
_putchar('\n');  
}
}
