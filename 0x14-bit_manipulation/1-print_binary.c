#include <stdio.h>
#include "main.h"
unsigned int power(unsigned int i, unsigned int p);
/**
 * print_binary - converts decimal to binary
 * @n: the number
 * Return: the number in binary
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned long int temp = 0;

	for (i = 31;i >= 0;i--)
	{
		temp = (n>>i) & 1;
		_putchar((char) temp);
	}
}
