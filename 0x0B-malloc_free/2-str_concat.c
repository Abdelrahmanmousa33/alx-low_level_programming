#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * str_concat - a function that ireturns a pointer to
 * a newly allocated space in memory,
 * which contains a concatinating of the strings given as a parameter.
 *@s1:first string
 *@s2:the string to be add
 *Return: ptr (sucess) NULL (fail)
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0, c = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr = (char *)malloc(sizeof(char) * (strlen(s1) + 1)
			+ sizeof(char) * (strlen(s2)));
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[c] != '\0')
	{
		ptr[i + c] = s2[c];
		c++;
	}
	return (ptr);
}
