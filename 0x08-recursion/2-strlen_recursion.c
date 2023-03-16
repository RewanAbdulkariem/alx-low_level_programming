#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to string params
 * Return: recursion
 */
 int _strlen_recursion(char *s)
 {
 	static int len = 0;
 	if(*s)
 	{
 		len++;
 		_strlen_recursion(++s);
 	}
 	return (len);
 }
