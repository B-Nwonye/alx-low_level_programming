#include <stdio.h>

/**
 * main - A program that prints the lowercase alphabet in reverse
 *
 * Return: 0 if no error occurs
 */
int main(void)
{

	int d;

	char low;
	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n'); 
	return (0);
}
