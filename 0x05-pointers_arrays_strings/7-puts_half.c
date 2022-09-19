#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: is string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0, j = 0, max;

	while (str[i++])
		j++;

	if ((j % 2) == 0)
		max = j / 2;

	else
		max = (j + 1) / 2;

	for (i = max; i < j; i++)
		_putchar(str[i]);

	_putchar('\n');
}
