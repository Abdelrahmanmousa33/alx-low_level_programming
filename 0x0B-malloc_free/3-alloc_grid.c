#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *alloc_grid - function that returns
 * a pointer to a 2 dimensional array of integers.
 *@width:of array
 *@height:of array
 *Return: ptr (sucess) NULL (fail or size = 0)
 */
int **alloc_grid(int width, int height)
{
	int **thearray;
	int h, w;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	thearray = malloc(sizeof(int *) * height);
	if (thearray == NULL)
	{
		free(thearray);
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
	thearray[h] = malloc(sizeof(int) * width);
	if (thearray[h] == NULL)
	{
		free(thearray[h]);
		return (NULL);
	}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			thearray[h][w] = 0;
		}
	}
	return (thearray);
}


