#include "main.h"

/**
 * _sqrt_recursion - main funct
 * @n: int n
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return sqrt_helper(n, 1, n / 2);
}
/**
 * sqrt_helper - main funct
 * @n: int n
 * @start: start
 * @end: end
 * Return: int
 */
int sqrt_helper(int n, int start, int end) 
{
	int mid, mid_squared;
	if (start > end)
		return (-1); 
	mid = start + (end - start) / 2;
	mid_squared = mid * mid;

	if (mid_squared == n)
		return (mid);
	if (mid_squared < n)
		return (sqrt_helper(n, mid + 1, end));

	return (sqrt_helper(n, start, mid - 1));
}
