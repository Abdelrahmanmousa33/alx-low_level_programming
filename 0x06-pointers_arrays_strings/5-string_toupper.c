#include "main.h"
#include <stdio.h>
/**
 * string_toupper - check the code
 *@ptr:input
 * Return: Always 0.
 */
char *string_toupper(char *ptr)
{
	int i = 0;

	while (ptr[i] != '\0')
	{
		if (ptr[i] >= 65 && ptr[i] <= 90)
		{
			ptr[i] = ptr[i] + 32;
		}
		i++;
	}
	return (ptr);
}
