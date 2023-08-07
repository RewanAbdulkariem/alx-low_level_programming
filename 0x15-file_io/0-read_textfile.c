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
	char c;
	int n = 0;
	FILE *fp = fopen(filename, "r");

	if (fp == NULL || filename == NULL)
	{
		return (0);
	}
	do {
		c = fgetc(fp);
		if (feof(fp))
			break;

		printf("%c", c);

		n++;
	} while (--letters > 0);

	fclose(fp);
	return (n);
}
