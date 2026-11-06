#include <stdio.h>
/**
* main- Print z-a
* Description: uses putchar to print each letter in while
* Return: 0 once printed
*/

int main(void)
{
int count;

count = 1;

while (count <= 100)
{
if (count % 3 == 0 && count % 5 == 0)
{
printf("FizzBuzz");
}
else if (count % 3 == 0)
{
printf("Fizz");
}
else if (count % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", count);
}
count++;
if (count != 100)
{
putchar(' ');
}
}
putchar('\n');
return (0);
}
