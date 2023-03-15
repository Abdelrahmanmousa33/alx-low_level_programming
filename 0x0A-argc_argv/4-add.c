#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - print its number of arguments folowed by a new line
 *@argc:number of parameters
 *@argv:array of strings
 * Return: - 0
 */
int main(int argc, char *argv[])
{
	int sum = 0, c = 1, j;
	int num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (c < argc)
	{
		for (j = 0; argv[c][j] != '\0'; j++)
		{
			if (isdigit(argv[c][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[c]);
		sum += num;
		c++;
	}
	printf("%d\n", sum);
	return (0);
}
