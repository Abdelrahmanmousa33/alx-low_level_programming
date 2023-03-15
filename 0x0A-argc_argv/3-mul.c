#include <stdio.h>
/**
 * main - print its number of arguments folowed by a new line
 *@argc:number of parameters
 *@argv:array of strings
 * Return: - 0
 */
int main(int argc, char *argv[])
{
	int a = (int)argv[1];
		printf("%d\n", a);
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", *argv[1] * *argv[2]);
	return (0);
}
