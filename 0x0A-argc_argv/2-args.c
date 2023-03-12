#include <stdio.h>
/**
 * main - print its number of arguments folowed by a new line
 *@argc:number of parameters
 *@argv:array of strings
 * Return: - 0
 */
int main(int argc, char *argv[])
{
	int c = 0;
	(void)argc;
	while (argv[c] != NULL)
	{
		printf("%s\n", argv[c]);
		c++;
	}
	return (0);
}
