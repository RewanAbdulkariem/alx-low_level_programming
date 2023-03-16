#include "main.h"
/**
 * _sqrt_recursion - main funct
 * @n: the number to find the square root of
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursively finds the square root of n
 * @n: the number to find the square root of
 * @i:num
 * Return: the square root of n, 
 * or -1 if n does not have a natural square root
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
