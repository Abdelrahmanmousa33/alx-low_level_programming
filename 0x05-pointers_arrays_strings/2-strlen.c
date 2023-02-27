#include "main.h"
/**
 * _strlen - check the code
 *@s:input
 * Return: Always nothing
 */
int _strlen(char *s)
{

	int n = 0, b = 0;

	while (s[n] != '\0')
	{
		b++;
		n++;
	}
	return (b);
}
