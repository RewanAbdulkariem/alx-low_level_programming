#include "main.h"
/**
 * flip_bits - gets the number of bits you would need to flip
 * @n: first number
 * @m: second number
 * Return: the number of bits you would need to flip
 * to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits = 0, x;

	x = n ^ m;
	while (x)
	{
		if ((x & 1) == 1)
			nbits++;
		x >>= 1;
	}
	return (nbits);
}
