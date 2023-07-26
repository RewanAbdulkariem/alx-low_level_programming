#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers & new line at the end
 * @separator: string
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i;

	va_start(args, n);

	for (i = 0; i < (int)n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i != (int)(n - 1))
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(args);
}
