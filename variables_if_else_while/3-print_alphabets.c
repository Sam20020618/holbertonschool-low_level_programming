#include <stdio.h>
/**
* main- Print a-z then A-Z
* Description: uses putchar to print each letter in while
* Return: 0 once printed
*/
int main(void)
{
char letter = 'a';
char capLetter = 'A';
int i = 0;
int j = 0;

while (i < 26)
{
putchar(letter);
letter++;
i++;
}
while (j < 26)
{
putchar(capLetter);
capLetter++;
j++;
}
putchar('\n');
return (0);
}
