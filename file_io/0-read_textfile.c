#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints
 * it to the POSIX standard output.
 * @filename: Name of the file to read.
 * @letters: Number of letters it should read and print
 * Return: The actual number of letters read and printedi
 * or 0 if an error occurs.
 */



ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	size_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	buffer = malloc(letters + 1);

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytes_read = fread(buffer, 1, letters, file);
	bytes_written = fwrite(buffer, 1, bytes_read, stdout);

	free(buffer);
	fclose(file);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
