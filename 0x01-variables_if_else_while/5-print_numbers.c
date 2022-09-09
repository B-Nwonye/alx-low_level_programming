#include <stdio.h>

/**
 * main - prints all single digit numbers
 *
 * Description: "A program that prints all single digit numbers of base 10
 * starting from 0."
 *
 * Return: 0 if no error occurs
 */
int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}
