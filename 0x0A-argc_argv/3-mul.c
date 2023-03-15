#include <stdio.h>
#include <stdlib.h>
/**
 * main - print its number of arguments folowed by a new line
 *@argc:number of parameters
 *@argv:array of strings
 * Return: - 0
 */
int main(int argc, char *argv[])
{
	int ai, bi;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	ai = atoi(argv[1]);
	bi = atoi(argv[2]);
	printf("%d\n", ai * bi);
	return (0);
}
