#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strdup - a function that ireturns a pointer to
 * a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *@str:the string to be copied
 *Return: ptr (sucess) NULL (fail)
 */
char *_strdup(char *str)
{
	char *thecopy = (char *) malloc(sizeof(char) * (strlen(str) + 1));

	if (thecopy == NULL || str == NULL)
		return (NULL);
	strcpy(thecopy, str);
	return (thecopy);
}

