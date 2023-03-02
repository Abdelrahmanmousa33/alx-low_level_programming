#include "main.h"
#include <stdio.h>

/**
 * _strcmp - check the code
 *@s1:inpu
 *@s2:input
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int c = 0;

	while (s1[c] == s2[c])
	{
		if (s1[c] == '\0' || s1[c] == '\0')
			break;
		c++;

	}
	if (s1[c] > s2[c])
		return (s1[c] - s2[c]);
	else if (s1[c] < s2[c])
		return (s1[c] - s2[c]);
	else
		return (0);

}
