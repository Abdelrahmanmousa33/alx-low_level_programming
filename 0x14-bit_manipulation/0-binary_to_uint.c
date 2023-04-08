#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

unsigned int power(unsigned int i, unsigned int p);
/**
 * binary_to_uint - converts binary to uint
 * @b: string of number to be conveted
 * Return: the uint
 */
unsigned int binary_to_uint(const char *b)
{
	size_t i = 0;
	unsigned int sum = 0;


	if (b == NULL)
		return (0);
	for (i = 0; i < strlen(b); i++)
	{
		if ('1' != b[i] && b[i] != '0')
		{
			return (0);
		}
		sum = sum + (b[i] - '0') * power(2, (strlen(b) - i) - 1);
	}
	return (sum);
}
/**
 * power - gets the power of a number
 * @i:number
 * @p:power
 * Return: the amswe
 */
unsigned int power(unsigned int i, unsigned int p)
{
	if (p == 0)
		return (1);
	return (i * power(i, p - 1));
}



