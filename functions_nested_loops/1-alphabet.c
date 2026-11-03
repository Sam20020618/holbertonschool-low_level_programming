#include "main.h"

/**
 * main - prints off a-z using _putchar
 * Description: uses _putchar to print each letter in while
 * Return: Always 0.
 */

int main(void)
{
char let = 'a';
int i = 0;

while (i < 26)
{
_putchar(let);
let++;
i++;
}
_putchar('\n');
return (0);
}
