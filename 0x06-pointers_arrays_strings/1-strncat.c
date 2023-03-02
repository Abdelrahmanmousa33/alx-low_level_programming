#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - check the code
 *@dest:input
 *@src:input
 *@n:input
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int d, c, srclen;

	d = strlen(dest);
	srclen = strlen(src);
	if (n > srclen)
	{
		n = strlen(src);
	}
	for (c = 0; c < n; c++)
	{
		dest[d + c] = src[c];
	}

	return (dest);
}
