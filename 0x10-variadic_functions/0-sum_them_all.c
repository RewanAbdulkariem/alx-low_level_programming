#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - sum of all its parameters
* @num_args: n args
* Return: sum or if n == 0, return 0
*/
int sum_them_all(const unsigned int num_args, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	if (num_args)
	{
		va_start(args, num_args);
		for (i = 0; i < num_args; i++)
		{
			sum += va_arg(args, int);
		}
		va_end(args);
	}
	return (sum);
}
