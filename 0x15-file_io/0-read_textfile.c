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
	if (filename == NULL)
		return (0);

	FILE *file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	char *buffer = (char *)malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	ssize_t bytesRead = fread(buffer, sizeof(char), letters, file);

	if (bytesRead > 0)
	{
		buffer[bytesRead] = '\0';

		ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

		if (bytesWritten < 0 || (size_t)bytesWritten != bytesRead)
		{
			free(buffer);
			fclose(file);
			return (0);
		}
	}

	free(buffer);
	fclose(file);

	return (bytesRead);
}
