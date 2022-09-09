#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase
 *
 * Description: "A program that prints the alphabet in lowercase."
 *
 * Return: 0 if jo error occurs
 */
int main(void)
{
	int i = 97;

	while (i  < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
