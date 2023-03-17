#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
 * string_nconcat- allocating memroy and adding two strings
 *@s1:first sting
 *@s2:secound
 *@n:number of char to be added
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	size_t c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (strlen(s2) <= n)
		n = strlen(s2);
	ptr = malloc(sizeof(s1) + n)l
	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, s1);
	for (c = strlen(s1); c <= strlen(s1) + n; c++)
	{
		ptr[c] = s2[c - strlen(s1)];
	}
	ptr[c] = '\0';
	return (ptr);
}
