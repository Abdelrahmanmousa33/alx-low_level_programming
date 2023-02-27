#include "main.h"
#include <stdio.h>
/**
 * print_array - check the code for
 *@a:input
 *@n:input
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
