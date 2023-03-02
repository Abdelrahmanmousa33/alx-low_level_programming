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
	int n;

	n = strlen(src);
	src[n-1] = *dest;
	return (&dest);


}
