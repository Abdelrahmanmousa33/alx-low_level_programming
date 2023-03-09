#include "main.h"
#include <stdio.h>

/**
 *_memset -  function that fills memory with a constant byte.
 *@b: the constant byte
 *@s: the memory the function will print to
 *@n:the number of bytes to be filled
 * Return: char*
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		*(s + c) = b;
	}
	return (s);
}
