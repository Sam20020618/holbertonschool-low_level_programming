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

while (count < n)
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

}
