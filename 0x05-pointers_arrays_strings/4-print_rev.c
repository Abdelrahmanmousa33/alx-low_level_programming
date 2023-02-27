#include "main.h"

/**
 * print_rev - check the code
 *@s:input
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int n = 0, b = 0;

	while (s[n] != '\0')
	{
		n++
	}
	char *rev[n];

	for (; n >= b; n--)
	{
		rev[b] = s[n];
		b++;
		_putchar(rev[b]);
	}
	_putchar('\n');
}
