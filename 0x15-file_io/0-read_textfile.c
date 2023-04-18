#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: the file
 * @letters: nubmer of letters
 * Return: number of letters printed or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp = fopen(filename, "r");
	char *buff = malloc(sizeof(char) * letters);
	size_t lettersred = 0;

	if (fp == -1)
		return (0);
	lettersred += read(1, buff, letters);
	dprintf(1, "%s", buff);
	fclose(fp);
	free(buff);
	return (lettersred);
}
