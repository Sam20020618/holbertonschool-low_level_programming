#include <stdio.h>
/**
* main-Runs the print program
* Description: uses puts to print out a statment
* Return: 0 once printed
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("is positive\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else
{
printf("is negative");
}
return (0);
}
