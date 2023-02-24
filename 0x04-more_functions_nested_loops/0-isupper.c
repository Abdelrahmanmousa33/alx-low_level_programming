#include "main.h"
/**
 * _isupper - chexk up
 * @c: the char
 * Return: 1(sucsses),0(otherwise)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
