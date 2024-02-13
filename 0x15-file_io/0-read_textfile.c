#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - function that read a file
 * @filename: file to read from
 * @letters: letters of the file
 *
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_f, read_f, write_f;
	char *buffer;

	if (filename == NULL)
		return (0);

	open_f = open(filename, O_RDONLY);
	read_f = read(open_f, buffer, letters);
	write_f = write(STDOUT_FILENO, buffer, read_f);
	buffer = (char *)malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
		return (0);

	if (open_f == -1 || read_f == -1 || write_f == -1 || wrie_f != read_f)
	{
			free(buffer);
			return (0);
	}

	free(buffer);
	close(open_f);

	return (write_f);
}
