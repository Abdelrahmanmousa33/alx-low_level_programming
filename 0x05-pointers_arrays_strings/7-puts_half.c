#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half - print the secound half of a string
 *@str: the string
 *return: (void)
 */
void puts_half(char *str)
{
	size_t n = 0;

	if (strlen(str) % 2 != 0)
	{
		n = (strlen(str) - 1) / 2;
	}
	else
	{
		n = strlen(str) / 2;
	}
	for (; n < strlen(str); n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
