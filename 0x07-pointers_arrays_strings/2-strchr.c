#include "main.h"
#include <stdio.h>

/**
 *_strchr -  function that locates a char in a string.
 *@s:source
 *@c:the char
 * Return: char*
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (;; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		else if (*(s + i) == '\0')
		{
			return (NULL);
		}
	}
}
