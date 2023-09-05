#include "main.h"

/**
 * _strlen - find length of string
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);
}

/**
 * create_file - creates file and write content with certain conditions
 * @filename: name of file
 * @text_content: content to write
 * Return: 1 on success, -1 on error
 */

int create_file(const char *filename, char *text_content)
{
	int file_d;
	int n_wrote;

	if (!filename)
		return (-1);

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_d == -1)
		return (-1);

	if (!text_content)
	{
		close(file_d);
		return (1);
	}

	n_wrote = write(file_d, text_content, _strlen(text_content));

	if (n_wrote == -1 || n_wrote != _strlen(text_content))
	{
		close(file_d);
		return (-1);
	}

	close(file_d);

	return (1);
}
