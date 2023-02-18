#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: 0
 */
int main(void)
{
	short d1, d2, d3;

	for (d1 = 48; d1 <= 57; d1++)
	{
		for (d2 = d1 + 1; d2 <= 57; d2++)
		{
			for (d3 = d2 + 1;  d3 <= 57; d3++)
			{
				putchar (d1);
				putchar (d2);
				putchar (d3);
				if ((char)d1 != '7')
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
