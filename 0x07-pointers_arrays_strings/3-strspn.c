#include "main.h"
#include <stdio.h>

/**
 *_strspn - a function that gets the length of a prefix substring.
 *@s:source
 *@accept:the prefixes
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, c = 0;

	for (; s[i] != '\0'; i++)
	{
		if (accept[j] == '\0')
		{
			break;
		}
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}

		}
	}
	return (c);
}
