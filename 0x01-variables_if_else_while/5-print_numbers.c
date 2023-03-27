#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all single digit numbers with base 10
 *
 * Return: 0 (success)
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%i", x);
		x++;
	}
	printf("\n");
	return (0);
}
