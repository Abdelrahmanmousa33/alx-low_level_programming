#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - check the code
 *@dest:input
 *@src:input
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int d, s, c;

	d = strlen(dest);
	s = strlen(src);
	for (c = 0; c <= s; c++)
	{
		dest[d + c] = src[c];
	}

	return (dest);


}
