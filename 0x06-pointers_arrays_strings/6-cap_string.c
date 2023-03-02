#include "main.h"
#include <stdio.h>

/**
 * cap_string - check the code
 *@ptr:pinter
 * Return: Always 0.
 */
char *cap_string(char *ptr)
{
	int i = 0;

	while (ptr[i] != '\0')
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
		{
			if (ptr[i - 1] == ' ' ||
			ptr[i - 1] == '\t' ||
			ptr[i - 1] == '\n' ||
			ptr[i - 1] == ',' ||
			ptr[i - 1] == ';' ||
			ptr[i - 1] == '.' ||
			ptr[i - 1] == '!' ||
			ptr[i - 1] == '?' ||
			ptr[i - 1] == '"' ||
			ptr[i - 1] == '(' ||
			ptr[i - 1] == ')' ||
			ptr[i - 1] == '{' ||
			ptr[i - 1] == '}')
			{
				ptr[i] -= 32;
			}
		}
		i++;
}
}

