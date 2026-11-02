#include <stdio.h>
/**
* main- Runs the print program of many systems
* Description: uses printf to print out size of many types on the computer
* Uses sizeof to tell the exaxct size of data
* Uses lu to formate it the size numbers
* Return: 0 once printed
*/
int main(void)
{
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
