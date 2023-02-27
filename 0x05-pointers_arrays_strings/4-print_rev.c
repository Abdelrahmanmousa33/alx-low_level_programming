#include "main.h"

/**
 * print_rev - check the code
 *@s:input
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int n = 0;
	char *rev;

	while (s[n] != '\0')
	{
		rev[n] = s[n];
		n++;
	}
	for (; n >= 0; n--)
	{
		_putchar(rev[n]);
	}
	_putchar('\n');
}
