#include "main.h"

/**
 * _puts2 - check the code
 *@str:input
 * Return: Always 0.
 */
void _puts2(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		if (n == 0 || n % 2 == 0)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
