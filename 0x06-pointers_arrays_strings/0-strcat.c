#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @src: cadena a copiar
 * @dest: destino de la cadena.
 * Return: dest.
 */

 char *_strcat(char *dest, char *src)
 {
 	int l1 = 0, l2 = 0;
 	
 	while ( dest[l1++] != '\0')
 	{	}

 	for (l2 = 0; src[l2] != '\0' ;l2++,l1++)
 	{
 		dest[l1-1] = src[l2];
 	}
 	dest[l1] = '\0';
 	return (dest);
 }
