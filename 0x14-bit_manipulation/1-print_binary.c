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
	int i = 0, count = 0;
	unsigned long int  temp;

	for (i = 63; i >= 0; i--)
	{
		temp = (n >> i) & 1;
		if ((temp & 1) == 1)
		{
			_putchar('1');
			count++;
		}
		else if (count != 0)
			_putchar('0');
	}
	if (count == 0)
		_putchar('0');
}
