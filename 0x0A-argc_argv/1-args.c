#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: number of arguments passed into the program
 * @argv: an array of arguments passed
 * Return: 0 always
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
