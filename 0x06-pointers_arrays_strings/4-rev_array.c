#include "main.h"
#include <stdio.h>

/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int buf[n], c = 0;

	while (c <= n - 1)
	{
		buf[c] = a[c];
	}
	while (c >= 0)
	{
		a[n - (c + 1)] = buf[c];
	}
}
