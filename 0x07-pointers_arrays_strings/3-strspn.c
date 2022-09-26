#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: source
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int pref = 0;
	int i, j;

	i = 0;
	j = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		pref = count;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
			}
			j++;
		}
		if (pref == count)
		{
			break;
		}
		i++;
	}

	return (count);
}

