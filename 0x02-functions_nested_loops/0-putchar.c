#include "_putchar"

/**
 * main - putchar
 *
 * Return: 0 if no error occurs
 */
int main(void)
{
	char text[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
