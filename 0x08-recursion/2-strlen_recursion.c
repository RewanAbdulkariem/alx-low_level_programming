#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to string params
 * Return: recursion
 */
 int len = 0;
 int _strlen_recursion(char *s)
 {
 	if(*s)
 	{
 		len++;
 		_strlen_recursion(++s);
 	}
 	return (len);
 }
