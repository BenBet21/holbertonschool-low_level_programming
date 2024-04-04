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
	int file;
	char *buffer;
	int index = 0;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);

	read(file, buffer, letters);
	buffer[letters] = '\0';

	while (buffer[index])
		write(STDOUT_FILENO, &buffer[index++], 1);

	close(file);
	return (strlen(buffer));
}
