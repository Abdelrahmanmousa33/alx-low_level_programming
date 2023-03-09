#include "main.h"
#include <stdio.h>

/**
 *_memcpy -  function that copy memory area .
 *@src:source
 *@dest:destintion
 *@n:the number of bytes to be copied
 * Return: char*
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		*(dest + c) = *(src + c);
	}
	return (*dest);
}
