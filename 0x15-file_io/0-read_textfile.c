#include "main.h"
/**
 * read_textfile -  function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: filename
 * @letters:  the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n = 0, file, w;
	char *text;
	
	text = malloc(letters *sizeof(char));
	if (text == NULL)
		return (0);
	if (filename == NULL || letters == 0)
		return  (0);
	
	file = open(filename, O_RDONLY);
	if (file < 0)
	{
		free(text);
		return (0);
	}

	n = read(file, text, letters);
	if (n < 0)
	{
		free(text);
		return (0);
	}
	text[n] = '\0';

	if (close(file) < 0)
		return (0);

	w = write(STDOUT_FILENO, text, n);
	if (w < 0)
	{
		free(text);
		return (0);
	}
	
	free (text);
	return (w);
	
}
