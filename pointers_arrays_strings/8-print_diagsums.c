#include "main.h"
/**
* print_diagsums - printing the sum of two diagonals
* @a: The array
* @size: the size of the maxtrix
* Return: nothing
*/

void print_diagsums(int *a, int size)
{
int i;
int j;
int sum1;
int sum2;
int row_count;
int count_left;
int count_right;
i = 0;
j = 0;
sum1 = 0;
sum2 = 0;
count_left = 0;
count_right = size - 1;
row_count = 0;

while (i < size)
{
if (row_count  == count_left)
{
sum1 += a[j];
}
if (row_count == count_right)
{
sum2 += a[j];
}
j++;
row_count++;
if (row_count == size)
{
i++;
row_count = 0;
count_left++;
count_right--;
}
}
printf("%d, %d\n", sum1, sum2);
}
