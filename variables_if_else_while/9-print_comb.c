#include <stdio.h>
/**
* main- Print 0-9 with a , followed by a space
* Description: uses putchar in a while loop to print every number and ,
* Return: 0 once printed
*/
int main(void)
{
int num = 0;

while (num < 10)
{
putchar(num + '0');
if (num != 9)
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
