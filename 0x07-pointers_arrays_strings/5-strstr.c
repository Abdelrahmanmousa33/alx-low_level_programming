#include "main.h"
#include <stdio.h>

/**
 *_strstr - a function that locates a substring
 *@haystack:the string to look in
 *@needle: the string to look for
 * Return: a ptr to the start of the substring or null if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int j, c;
	char *ptr;

		for (j = 0; haystack[j] != '\0'; j++)
		{
			for (c = 0; haystack[j + c] == needle[c]; c++)
			{
				if (needle[c + 1] == '\0')
				{
					ptr = &haystack[j];
					return (ptr);
				}
			}
			if (haystack[j + 1] == '\0')
				return (NULL);
		}
	return (NULL);
}
