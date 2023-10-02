#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output
 * @filename: pointer to a constant character
 * @letters: number of letters
 * Return: the actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	ssize_t read_bytes, writ_bytes;
	char *buffr;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	buffr = malloc(sizeof(char) * letters);
	if (buffr == NULL)
	{
		close(fd);
		return (0);
	}
	read_bytes = read(fd, buffr, letters);
	if (read_bytes == -1)
	{
		free(buffr);
		close(fd);
		return (0);
	}
	writ_bytes = write(STDOUT_FILENO, buffr, read_bytes);
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
