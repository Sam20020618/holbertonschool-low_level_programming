#include <stdio.h>
/**
* main- Print a-z
* Description: uses putchar to print each letter in while
* Return: 0 once printed
*/
int main(void)
{
char letter = 'a';
int i = 0;

while (i < 26)
{
putchar(letter);
putchar('\n');
letter++;
i++;
}
return (0);
}
