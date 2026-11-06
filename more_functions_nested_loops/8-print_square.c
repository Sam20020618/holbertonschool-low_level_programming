#include "main.h"

/**
 * print_square - prints a square shape
 * @size: The size of the sqaure
 * Return: returns nothing
 */

void print_square(int size)
{
int count;
int row;

count = 0;
row = 0;

while (count < size)
{
while (row < size)
{
_putchar('#');
row++;
}
_putchar('\n');
row = 0;
count++;
}
if (size <= 0)
{
_putchar('\n');
}
}
