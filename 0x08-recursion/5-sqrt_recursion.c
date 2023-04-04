#include "main.h"
#include <stdio.h>

/*
 * _sqrt_recursion - calculates the square root of a numbber
 * @n: the number
 * Return: the square
 */
int _sqrt_recursion(int n)
{
	if (n % n != 0)
		return (-1);
	return (n / n);

}
