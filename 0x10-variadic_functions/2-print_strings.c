#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - a function that prints strings, followed by a new line
 * @n:number of args
 * @separator: to seprate nums
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *x;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(ap, char *);
		if (x == NULL)
			printf("nill");
		else
			printf("%s", x);
		if (separator != NULL && i + 1 < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
