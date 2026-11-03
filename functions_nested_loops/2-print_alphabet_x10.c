#include "main.h"

/**
 * print_alphabet_x10 - prints off a-z 10 times using _putchar
 * Description: uses a double while loop to print it 10 times
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
char let = 'a';
int count = 0;

while (count < 10)
{
int i = 0;
while (i < 26)
{
_putchar(let);
let++;
i++;
}
_putchar('\n');
count++;
}
return;
}
