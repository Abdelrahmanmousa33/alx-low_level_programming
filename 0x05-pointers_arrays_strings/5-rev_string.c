#include "main.h"
#include <string.h>
/**
 * rev_string - check the code
 *@s:input
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int n, b;

	b = 0;
	n = strlen(s);
	n--;
	for (; n >= 0 ; n--)
	{
		s[b] = s[n];
		b++;
	}
	_putchar('\n');
}
