#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print single digit numbers followed by , and space
 *
 * Return: 0 (success)
 */

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(48 + x);
		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
