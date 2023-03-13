#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array -a function that creates an array of chars,
 * and initializes it with a specific char.
 *@size:size of the array
 *@c:the char
 *Return: ptr (sucess) NULL (fail or size = 0)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *buffer = (char *)malloc(size);
	char *ptr = buffer;

	if (size == 0)
	{
		return (NULL);
	}
	if (buffer == NULL)
		return (NULL);
	while (i <= size)
	{
		buffer[i] = c;
		i++;
	}
	return (ptr);
}
