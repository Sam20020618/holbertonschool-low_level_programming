#include <stdio.h>
/**
* main- Print 0-9
* Description: uses printf in a while loop to print every number
* Return: 0 once printed
*/
int main(void)
{
int num = 0;

while (num < 10)
{
printf("%d", num);
num++;
}
return (0);
}
