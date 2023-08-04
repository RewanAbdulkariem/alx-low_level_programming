#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted
 */
void print_binary(unsigned long int n)
{
	unsigned int i, len;
	unsigned long int m;

	m = n;
	for (len = 0; m != 0; len++)
		m = m >> 1;
	if (len == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 0; i < len; i++)
	{
		/**printf("\n--%lu--%u-- \n",(n & (1u << (len-1))), (1u << (len-1)));*/
		if ((n | (1u << (len - 1))) == n)
			_putchar('1');
		else
			_putchar('0');
		n = n << 1;
	}
}
