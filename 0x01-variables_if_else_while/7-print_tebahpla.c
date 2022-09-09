#include <stdio.h>

/**
 * main - print the lowercase alphabet in reverse
 *
 * Description: A program that prints the lowercase alphabet in reverse
 *
 * Return: 0 if no error occurs
 */
int main(void)
{
	char low;
	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);
}
