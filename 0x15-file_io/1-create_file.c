#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <string.h>

/**
 * create_file - creats a text file and writes a string into it
 * @filename: the file
 * @text_content: nubmer of letters
 * Return: 1 sucsess -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	ssize_t writecheck;

	if (fd == -1 || filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	writecheck = write(fd, text_content, strlen(text_content));
	if (writecheck == -1)
		return (writecheck);
	close(fd);
	return (1);
}
