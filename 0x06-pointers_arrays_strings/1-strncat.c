#include "main.h"

/**
 * _strncat - concatenates two string
 *
 * dest: destination of char
 * src: source of char
 * @n: number of bytes from src
 *
 * Return: new string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';

	return (dest);
}
