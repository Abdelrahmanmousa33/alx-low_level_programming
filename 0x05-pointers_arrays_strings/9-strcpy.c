#include "main.h"

/**
 *_strcpy - check the code
 * @dest:input
 *@src:input
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = src[i + 1];
	return (dest);

}
