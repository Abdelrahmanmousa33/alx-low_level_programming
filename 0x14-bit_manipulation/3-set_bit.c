#include <stdio.h>
#include "main.h"
/**
 * set_bit - sets the bit at agiven index to 1
 * @n:the number
 * @index:the index
 * Return:value of the bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | (1 << index);
	return (*n);
}
