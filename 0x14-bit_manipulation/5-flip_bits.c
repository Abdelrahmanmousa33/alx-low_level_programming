#include <stdio.h>
#include "main.h"
/**
 * flip_bit -  returns the number of bits you would need to flip
 *  to get from one number to another 
 * @n:the first num
 * @m:the secound num
 * Return:number of bits flipped
 */
unsigned int  flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned int count = 0;

	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) != (m >> i))
			count++;
	}
	return (count);
}
