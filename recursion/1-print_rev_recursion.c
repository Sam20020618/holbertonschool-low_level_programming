#include "main.h"
/**
* _print_rev_recursion - Prints a string in reverse
* @s: The char array
* Return: nothing
*/

void _print_rev_recursion(char *s)
{
int count;
int i;
int check;
count = 0;
i = 0;
check = 0;
if (*s != '\0' && check == 0)
{
count++;
s++;
_print_rev_recursion(s);
}
else
{
check++;
}
if (i < count && count > 0)
{
s--;
_putchar(*s);
i++;
_print_rev_recursion(s);
}
if (i == count && i != 0)
{
_putchar('\n');
return;
}
}
