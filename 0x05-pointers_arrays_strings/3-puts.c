#include "main.h"

/**
 * _puts - check the code
 *@str:input
 * Return: Always 0.
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
}
