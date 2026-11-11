#include "main.h"
/**
* reverse_array - reverse the array
* @a: The array
* @n: The array size
* Return: no return
*/

void reverse_array(int *a, int n)
{
int hold;
int i;
i = 0;
n = n - 1;
while (i < n)
{
hold = a[i];
a[i] = a[n];
a[n] = hold;
i++;
n--;
}
}
