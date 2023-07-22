#include "main.h"
/**
 * _sqrt_recursion - main funct
 * @n: the number to find the square root of
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1, n));
}
/**
* _sqrt - recursively finds the square root of n
* @n: the number to find the square root of
* @start:num
* @end :end of range
* Return: the square root of n
* or -1 if n does not have a natural square root
*/
int _sqrt(int n, int start, int end)
{
	long mid;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	if (start > end)
		return (-1);

	mid = (start + end) / 2;

	if (mid * mid == n)
		return (mid);
	if (mid * mid < n)
		return (_sqrt(n, mid + 1, end));
	return (_sqrt(n, start, mid - 1));
}
