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

	n = n >> index;
	bit = n & 1;
	return (bit);
}
