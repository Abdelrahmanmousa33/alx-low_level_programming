#include <stdio.h>
/**
 * main - print its number of arguments folowed by a new line
 *@argc:number of parameters
 *@argv:array of strings
 * Return: - 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
