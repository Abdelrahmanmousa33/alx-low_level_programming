#include "main.h"
#include <stdio.h>

/**
 *leet - encodes to 1337
 *@n: the string to encode
 *Return: ptr to a stirng
 */

char *leet(char *n)
{
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";
	int i, j;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
				n[i] = s2[j];
		}
	}
	return (n);
}

