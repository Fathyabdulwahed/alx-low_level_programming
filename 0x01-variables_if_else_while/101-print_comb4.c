#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print numbers that are not equal
 *
 * Return: 0 (success)
 */

int main(void)
{
	int x = 0, y, z;

	while (x <= 7)
	{
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (z <= 9)
			{
			putchar(48 + x);
			putchar(48 + y);
			putchar(48 + z);
			if (x + y + z != 24)
			{
				putchar(',');
				putchar(' ');
			}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
