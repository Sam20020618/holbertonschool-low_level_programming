#include <stdio.h>

int main()
{
int n;
int a;
int b;
int quit;
int result;
int invalid;

result = 0;
quit = 0;

printf("Simple Calculator \n");
printf("1) Add \n");
printf("2) subtract \n");
printf("3) Multiply \n");
printf("4) Divide \n");
printf("0) Quit \n");

while (quit < 1)
{
invalid = 0;
scanf("%d", &n);
printf("Choice: %d \n", n);
scanf("%d", &a);
scanf("%d", &b);
printf("A: %d \n", a);
printf("B: %d \n", b);

if(n == 0)
{
printf("Bye!");
quit++;
} else if (n == 1)
{
result = a + b;
} else if (n == 2)
{
result = a - b;
} else if (n == 3)
{
result = a * b;  
} else if (n == 4)
{
result = a / b; 
} else 
{
printf("Invalid choice \n");
invalid ++;
}
if(invalid == 0)
{
printf("Result: %d \n", result);
}


}
return (0); 
}
