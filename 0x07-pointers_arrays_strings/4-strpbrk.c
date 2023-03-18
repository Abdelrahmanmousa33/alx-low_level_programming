#include "main.h"
#include <stdio.h>

/**
 *_strpbrk -a function that searches a string for any of a set of bytes
 *@s:source
 *@accept: the bytes
 * Return: a ptr to the byte in s that matches accept of null if there is not.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				ptr = &s[i];
				return (ptr);
			}
		}
	}
	if (ptr == 0)
		return (NULL);
	return (ptr);

}
