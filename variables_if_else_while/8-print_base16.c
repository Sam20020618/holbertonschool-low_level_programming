#include <stdio.h>
/**
* main- Print base 16
* Description: uses putchar in a while loop
* to print every number and letter to base 16
* Return: 0 once printed
*/
int main(void)
{
int num = 0;
char let = 'a';
int i = 0;

while (num < 10)
{
putchar(num + '0');
num++;
}
while (i < 6)
{
putchar(let);
let++;
i++;
}
putchar('\n');
return (0);
}
