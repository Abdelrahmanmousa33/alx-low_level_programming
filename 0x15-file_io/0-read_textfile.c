#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * ssize_read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: the file 
 * @letters: nubmer of letters
 * Return: number of letters printed or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp = fopen(filename,"r");
	char ch;
	size_t lettersred = 0;

	if(fp == NULL )
		return (0);

	while (!feof(fp))
	{
		ch = getc(fp);
		dprintf(1, "%c", ch);
		lettersred++;
		if (lettersred == letters)
		{
			fclose(fp);
			return (lettersred);
		}
	}
	fclose(fp);
	return (lettersred);
}
