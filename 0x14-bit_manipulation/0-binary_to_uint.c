#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j, len;
	unsigned int power, decVal = 0;

	if (!b)
		return (0);
	for (len = 0; b[len]; len++)
	;
	for (i = len - 1; b[i]; i--)
	{
		power = 1;
		if (b[i] < '0' || b[i] > '1')
			return (0);
		for (j = 1; j <= ((len - 1) - i); j++)
			power *= 2;
		decVal += (b[i] - '0') * power;
	}
	return (decVal);
}
