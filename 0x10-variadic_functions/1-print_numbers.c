#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @n:number of args
 * @separator: to seprate nums
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int x;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(ap, int);
		printf("%d", x);
		if (separator != NULL && i + 1 < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
