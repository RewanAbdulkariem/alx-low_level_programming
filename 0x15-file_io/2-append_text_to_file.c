#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: variable pointer
 * @text_content: string to add at the end of the file
 * Return: 1 on success, -1 on failure
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	file = open(filename, O_WRONLY | O_APPEND, 0600);
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
