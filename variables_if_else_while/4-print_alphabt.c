#include <stdio.h>
/**
* main- Print a-z expect q and e
* Description: uses putchar to print each letter in while
* And if statment to keep out q and e
* Return: 0 once printed
*/
int main(void)
{
char letter = 'a';
int i = 0;

while (i < 26)
{
if (letter != 'q' || letter != 'e')
{
putchar(letter);
}
letter++;
i++;
}
putchar('\n');
return (0);
}
