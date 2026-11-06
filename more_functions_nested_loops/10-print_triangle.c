#include "main.h"

/**
 * print_triangle - draws a triangle
 * @size: the size of the triangle
 * Return: nothing
 */

void print_triangle(int size)
{
int count;
int space;
int spaceNum;
int hasCount;
int hasAmount;

count = 0;
space = size;
spaceNum = 1;
hasCount = 1;
hasAmount = 0;

while (count < size && count > -1)
{
while (spaceNum < space)
{
_putchar(' ');
spaceNum++;
}
while (hasAmount < hasCount)
{
_putchar('#');
hasAmount++;
}
_putchar('\n');
count++;
space--;
spaceNum = 1;
hasCount++;
hasAmount = 0;
}
if (count <= 0)
{
_putchar('\n');
}
}
