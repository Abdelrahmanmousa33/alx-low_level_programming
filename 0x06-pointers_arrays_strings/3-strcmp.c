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
	int c;

	while (s1[c] = s2[c])
	{
		c++;
	}
	if (s1[c] > s2[c])
		return (1);
	else if (s1[c] < s2[c])
		return (-1);
	else
		return (0);

}
