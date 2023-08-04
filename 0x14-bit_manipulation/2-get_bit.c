#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number;
 * @index: index
 * Return: value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	n = n >> index;
	bit = n & 1;
	return (bit);
}
