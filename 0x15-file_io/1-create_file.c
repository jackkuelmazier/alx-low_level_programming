#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to a constant character
 * @text_content: null terminated string
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		ssize_t len = write(fd, text_content, strlen(text_content));

		if (len == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
