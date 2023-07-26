#include <stdlib.h>
#include <stdio.h>
/**
* op_add - get sum of two numbers
* @a: first number
* @b: second number
*
* Return: the sum
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - get difference between two numbers
* @a: first number
* @b: second number
*
* Return: the difference
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - get the product of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - get the division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - get the remainder of the division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the remainder of the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
