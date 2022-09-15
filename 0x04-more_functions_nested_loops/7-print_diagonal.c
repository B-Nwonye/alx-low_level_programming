#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: the number of \ characters to be printed 
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int line, space;

	if (n > 0);
	{
		for (line = 0; line < n; line++)
		{
			for (space = 0; space < line; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			if (line == n - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
