#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all the alphapet except e and q
 *
 * Return: 0 (success)
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x == 'q' || x == 'e')
		{
			x++;
		}
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
