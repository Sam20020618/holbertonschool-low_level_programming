#include <stdio.h>

int main()
{
int n;

printf("Simple Calculator \n");
printf("1) Add \n");
printf("2) subtract \n");
printf("3) Multiply \n");
printf("4) Divide \n");
printf("0) Quit \n");
scanf("%d", &n);
printf("Choice : %n \n", n);


if(n == 0)
{
printf("Bye!");
return (0);
}
}