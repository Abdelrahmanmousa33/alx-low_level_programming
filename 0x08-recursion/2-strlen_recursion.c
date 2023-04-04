#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen_recursion - return a lenght of a string
 * @s: the string
 * Return:lenght
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (s[0] != '\0')
	{
		n++;
		n = n + _strlen_recursion(++s);
	}
	return (n);
}
