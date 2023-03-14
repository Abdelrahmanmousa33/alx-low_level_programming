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
	int **thearray = (int **) malloc(sizeof(int) * width * height);
	int h, w;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
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


