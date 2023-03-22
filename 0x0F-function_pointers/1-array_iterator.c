#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - passes an array to a function
 * @array: the array
 * @size: size of the array
 * @action:pointer to the function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	while (i < size)
	{

		(action)(array[i]);
		i++;
	}
}
