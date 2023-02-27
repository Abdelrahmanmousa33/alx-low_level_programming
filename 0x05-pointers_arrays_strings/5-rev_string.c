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

	char rev = s[0];

	b = 0;
	n = strlen(s);
	n++;
	for (; b < n ; b++)
	{
		n--;
		rev = s[b];
		s[b] = s[n];
		s[n] = rev;
	}
	_putchar('\n');
}
