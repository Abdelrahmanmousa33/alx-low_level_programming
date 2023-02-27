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
	char rev [n]
	n--;
	for (; n >= 0 ; n--)
	{
		rev[b] = s[n];
		b++;
	}
	_putchar('\n');
}
