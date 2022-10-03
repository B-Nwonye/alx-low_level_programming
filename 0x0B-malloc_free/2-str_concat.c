#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two string
 * @s1: string to be concatenated
 * @s2: string to be concatenated to s1
 * Return: pointer to new string, NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int x, concat_x = 0, length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] || s2[x]; x++)
		length++;

	concat_str = malloc(sizeof(char) * length);

	if (concat_str == NULL)
		return (NULL);

	for (x = 0; s1[x]; x++)
		concat_str[concat_x++] = s1[x];

	for (x = 0; s2[x]; x++)
		concat_str[concat_x++] = s2[x];

	return (concat_str);
}

