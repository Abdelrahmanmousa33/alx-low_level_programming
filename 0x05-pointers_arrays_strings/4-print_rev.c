#include "main.h"
#include <string.h>
/**
 * print_rev - check the code
 *@s:input
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int n;

	n = strlen(s);
	n--;
	for (; n >= 0 ; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
