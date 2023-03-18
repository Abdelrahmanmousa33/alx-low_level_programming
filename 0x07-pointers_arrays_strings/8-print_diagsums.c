#include "main.h"
#include <stdio.h>

/**
 *print_diagsums- a function that prints the diaginals sum in square matrix
 *@a:the matrix
 *@size:size of the matrix
 * Return: (void)
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0;
	unsigned int sum1 = 0, sum2 = 0;

	while (i < size)
	{
		sum1 = sum1 + a[i + (size * i)];
		i++;
	}
	while (j < size)
	{
		sum2 = sum2 + a[size * j + (size - j - 1)];
		j++;
	}
	printf("%d, %d\n", sum1, sum2);
}
