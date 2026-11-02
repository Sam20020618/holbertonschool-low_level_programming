#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main- Print a result
* Description: Print if the last digit is great than 5, =0 or less than 6
* Return: 0 once printed
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("%d and is greater than 5\n", n % 10);
}
else if (n == 0)
{
printf("%d and is 0\n", n % 10);
}
else
{
printf("%d and is less than 6 and not 0\n", n % 10);
}
return (0);
}
