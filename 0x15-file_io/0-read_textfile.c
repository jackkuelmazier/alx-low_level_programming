#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output
 * @filename: pointer to a constant character
 * @letters: number of letters that should
 * be read and printed
 * Return: the actual number of letters it
 * could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	char *buffr = malloc(sizeof(char) * letters);
	ssize_t read_bytes = read(fd, buffr, letters);
	ssize_t writ_bytes = write(STDOUT_FILENO, buffr, read_bytes);

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	if (buffr == NULL)
	{
		close(fd);
		return (0);
	}

	if (read_bytes == -1)
	{
		free(buffr);
		close(fd);
		return (0);
	}

	if (writ_bytes == -1 || writ_bytes != read_bytes)
	{
		free(buffr);
		close(fd);
		return (0);
	}

	free(buffr);
	close(fd);

	return (writ_bytes);
}
