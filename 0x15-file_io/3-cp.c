#include "main.h"

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
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		if (close(file_from) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_from);
			exit(100);
		}
		exit(99);
	}
	n = read(file_from, buf, 1024);
	if (n < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		if (close(file_from) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_from);
			exit(100);
		}
		if (close(file_to) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_to);
			exit(100);
		}
		exit(98);
	}
	
	if (write(file_to, buf, n) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		if (close(file_from) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_from);
			exit(100);
		}
		if (close(file_to) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_to);
			exit(100);
		}
		exit(99);
	}
	if (close(file_from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_from);
		exit(100);
	}
	if (close(file_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_to);
		exit(100);
	}
	return (0);
}
