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
	int c = 0, t;

	for (; c < n--; c++)
	{
		t = a[c];
		a[c] = a[n];
		a[n] = t;
	}
}
