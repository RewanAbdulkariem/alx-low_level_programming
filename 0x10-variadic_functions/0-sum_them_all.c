#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - a function that returns the sum of all its parameters
* @num_args: number of args
* Return: sum or if n == 0, return 0
*/
int sum_them_all(const unsigned int num_args, ...)
{
	int sum = 0;
	unsigned int i;
	va_list list;

	if (num_args)
	{
		va_start(list, num_args);
		for (i = 0; i < num_args; i++)
		{
			sum += va_arg(list, int);
		}
		va_end(list);
	}
	return (sum);
}
