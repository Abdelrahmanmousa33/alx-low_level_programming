#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
 * array_range- allocating memroy for an array of intgers
 *@min:the smallest number
 *@max:the biggest number
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int c = 0;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min) + 1);
	if (ptr == NULL)
		return (NULL);
	while (min <= max)
	{
		ptr[c] = min;
		min++;
		c++;
	}
	return (ptr);
}
