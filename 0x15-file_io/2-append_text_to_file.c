#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <string.h>

/**
 * append_text_to_file - creats a text file and writes a string into it
 * @filename: the file
 * @text_content: the text
 * Return: 1 sucsess -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd = open(filename, O_WRONLY | O_APPEND);
	ssize_t check;

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	check = write(fd, text_content, strlen(text_content));
	if (check == -1)
		return (-1);
	close(fd);
	return (1);
}
