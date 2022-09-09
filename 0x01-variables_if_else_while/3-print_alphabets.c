#include <stdio.h>

/**
 * main - prints the letters of the alphabet
 *
 * Description: "A program that prints the alphabet in lowercase, and then
 * in uppercase."
 *
 * Return: 0 if no error occurs
 */
int main(void)
{
	int i, j;

	i = 97;
	j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}

	while (j < 91)
	{
		putchar(j);
		j++;
	}

	putchar(10);

	return (0);
}
