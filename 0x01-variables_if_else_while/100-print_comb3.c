#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphapet
 *
 * Return: 0 (success)
 */

int main(void)
{
	int x = 0, y;

	while (x <= 8)
	{
		y = x + 1;
		while (y <= 9)
		{
			if (x < y)
			{
				putchar(48 + x);
				putchar(48 + y);
			}
			if (x + y != 17)
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
