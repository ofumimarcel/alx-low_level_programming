#include "main.h"

/**
 * read_textfile - read and prints to std output
 * @filename: file
 * @letters: size to read
 * Return: size read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t n_read, n_wrote;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	n_read = read(file_d, buffer, letters);

	if (n_read == -1)
	{
		free(buffer);
		close(file_d);
		return (0);
	}

	n_wrote = write(STDOUT_FILENO, buffer, n_read);

	if (n_wrote == -1)
	{
		free(buffer);
		close(file_d);
		return (0);
	}

	close(file_d);

	return (n_read);
}
