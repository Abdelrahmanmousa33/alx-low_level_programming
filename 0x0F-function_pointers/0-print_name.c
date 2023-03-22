#include <stdio.h>
#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#endif
/**
 * print_name - prints a name
 * @name: name of the person
 * @f: pointer to a fucntion that prints a name is speical way
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	(f)(name);
}
