#include "main.h"
/**
 * _isdigit - chexk up
 * @c: the char
 * Return: 1(sucsses),0(otherwise)
 */
int _isdigit (int c)
{
	if (c >= 0 && c <= 57)
	{
		return 1;
	}
	else
	{
		return 0;
	}
