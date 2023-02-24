#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	short i, j, num;
	for (i = 0; i <= 9; i ++)
	{
		for (j = 0; j <= 9; j ++)
		{
			num = i * j;
			if (num == 0)
			{
				_putchar(num + '0');
				continue;
			}
			if (num <= 9 && num != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(num + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
