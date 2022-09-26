#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: character in string
 * @s: the string
 * Return: a pointer to the first occurence of c
 * or NULL, if c is not found
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++)
	return (0);
}
