#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the bit at agiven index
 * @n:the number
 * @index:the index
 * Return:value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
