#include "main.h"
#include <string.h>
/**
 * rev_string - check the code
 *@s:input
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int c, i;

	char rev = s[0];

	i = 0;
	c = strlen(s);
	for (; i < c ; i++)
	{
		c--;
		rev = s[i];
		s[i] = s[c];
		s[c] = rev;
	}
	_putchar('\n');
}
