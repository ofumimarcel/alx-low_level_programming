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
 * append_text_to_file - append text
 * @filename: file
 * @text_content: content to append
 * Return: 1 on success, -1 on error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	int n_wrote;

	if (!filename)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);

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

