#include <stdio.h>

int main()
{
int n; 
float a; 
float b; 
int quit; 
float result; 
int invalid;
/**
* n runs the function
* a and b are the numbers to calculate
* quit and invalid controls the printed results
*/ 
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

if (n == 0)
{
printf("Bye!");
quit++;
} 
else if (n > 4)
{
printf("Invalid choice \n");
invalid ++;  
} 
else 
{
scanf("%f", &a);
printf("A: %.0f \n", a);
scanf("%f", &b);
printf("B: %.0f \n", b);
}

if (n == 1)
{
result = a + b;
} 
else if (n == 2)
{
result = a - b;
} 
else if (n == 3)
{
result = a * b;  
} 
else if (n == 4)
{
if (b == 0)
{
printf("Error: division by zero");
invalid++;
} 
else 
{
result = a / b; 
}
} 

if(invalid == 0 && quit == 0)
{
printf("Result: %.1f \n", result);
}
}
return (0); 
}
