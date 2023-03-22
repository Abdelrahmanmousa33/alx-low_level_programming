#include <stdio.h>
#ifndef function_pointers_h
#define function_pointers_h
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
	(f)(name);
}
