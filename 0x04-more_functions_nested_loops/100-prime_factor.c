#include <stdio.h>

/**
 * main- prints the largest prime factor of the number 612852475143
 *
 * Return: 0 always
 */

int main(void)
{
	long int prime = 612852475143;
	long int quotient = prime;
	long int divisor = 2;

	while (quotient != divisor)
	{
		if (quotient % divisor == 0)
		{
			quotient = quotient / divisor;
		}
		else
		{
			divisor++;
		}
	}
	printf("%li\n", quotient);

	return (0);
}
