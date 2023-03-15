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
	int sum, c;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (c = 0; c < argc; c++)
	{
	if (atoi(argv[c]) >= 48 && atoi(argv[c]) <= 57)
	{
	sum = sum + atoi(argv[c]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	}
	printf("%d\n", sum);
	return (0);
}
