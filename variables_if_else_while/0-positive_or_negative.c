#include <stdio.h>
#include <time.h>
/**
* main- Print a result
* Description: Print the results of if a number is positive, negative or zero
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
