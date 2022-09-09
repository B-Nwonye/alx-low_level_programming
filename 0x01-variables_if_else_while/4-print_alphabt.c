#include <stdio.h>

/**
 * main - prints the letters of the alphabet
 *
 * Description: "Print all the letters except q and e"
 *
 * Return: 0 if no error occurs
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}

	putchar(10);

	return (0);
}
