#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: the string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		exit(0);
	}
	_putchar(s[0]);
	s++;
	_puts_recursion(s);
}
