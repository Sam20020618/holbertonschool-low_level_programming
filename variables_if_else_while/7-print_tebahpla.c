#include <stdio.h>
/**
* main- Print z-a
* Description: uses putchar to print each letter in while
* Return: 0 once printed
*/
int main(void)
{
char letter = 'z';
int i = 0;

while (i < 26)
{
putchar(letter);
letter--;
i++;
}
putchar('\n');
return (0);
}
