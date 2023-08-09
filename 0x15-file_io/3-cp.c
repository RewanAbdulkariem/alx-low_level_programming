#include "main.h"
/**
 * main - program that copies the content of a file to another
 * @argc: number of argument
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_to, file_from, n;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		ErrorReading(argv[1]);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to < 0)
	{
		if (close(file_from) < 0)
			ErrorClosing(file_from);
		ErrorWriting(argv[2]);
	}
	do{
		n = read(file_from, buf, 1024);
		if (n < 0)
		{
			if (close(file_from) < 0)
				ErrorClosing(file_from);
			if (close(file_to) < 0)
				ErrorClosing(file_to);
			ErrorReading(argv[1]);
		}
		
		if (write(file_to, buf, n) < 0)
		{
			if (close(file_from) < 0)
				ErrorClosing(file_from);
			if (close(file_to) < 0)
				ErrorClosing(file_to);
			ErrorWriting(argv[2]);
		}
	} while (n != 0);
	
	if (close(file_from) < 0)
		ErrorClosing(file_from);
	if (close(file_to) < 0)
		ErrorClosing(file_to);
	
	return (0);
}

void ErrorReading(char *file_name)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
	exit(98);
}
void ErrorClosing(int file)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d", file);
	exit(100);
}
void ErrorWriting(char *file_name)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
	exit(99);
}
