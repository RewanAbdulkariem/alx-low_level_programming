#include "main.h"
/**
 * divisors - determines if a number is prime
 * @n: integer parameter representing the number to check
 * @m: integer parameter representing the divisor to use
 *
 * Return: 0 if the number is not prime, 1 otherwise
 */

int divisors(int n, int m)
{
	if (n <= 2)
		return ((n == 2) ? 1 : 0);
	if (n % m == 0)
		return (0);
	if (m * m > n)
		return (1);
	return (divisors(n, ++m));
}

/**
 * is_prime_number - determines if a number is prime
 * @n: integer parameter representing the number to check
 *
 * Return: 0 if the number is not prime, 1 otherwise
 */

int is_prime_number(int n)
{
	return (divisors(n, 2));
}
