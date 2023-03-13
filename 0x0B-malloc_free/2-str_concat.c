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

	if (s1 == NULL)
		strcpy(s1, "");
	if (s2 == NULL)
		strcpy(s1, "");
	ptr = (char *)malloc(sizeof(s1) + sizeof(s2));
	strcat(ptr, s1);
	strcat(ptr, s2);
	return (ptr);
}
