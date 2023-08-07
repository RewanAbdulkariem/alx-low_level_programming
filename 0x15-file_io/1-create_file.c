#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 * The created file must have those permissions: rw-------
 */
int create_file(const char *filename, char *text_content)
{
	int file;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file < 0)
	{
		return (-1);
	}

	if (write(file, text_content, strlen(text_content)) < 0)
	{
		return (-1);
	}
	return (1);
}
