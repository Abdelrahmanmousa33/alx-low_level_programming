#include <stdio.h>
#include "main.h"
/**
 * clear_bit - sets tihe bit at agiven index to 0
 * @n:the number
 * @index:the index
 * Return:value of the bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > 63)
		return (-1);
	*n = (~(i << index) & *n);
	return (1);
}
