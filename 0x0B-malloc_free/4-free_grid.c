#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *free_grid - function frees a 2d array
 *@grid:the array
 *@height:of array
 *Return:void
 */
void free_grid(int **grid, int height)
{
	while (height--)
	{
		free(grid[height]);
	}
	free(grid);
	return (void);
}
