#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: number to get the abs
 * Return: always n
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
