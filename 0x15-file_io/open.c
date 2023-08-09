#include "main.h"

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
