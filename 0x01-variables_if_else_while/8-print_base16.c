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
	int x = 0;
	char y = 'a';

	while (x <= 9)
	{
		putchar(48 + x);
		x++;
	}
	while (y <= 'f')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
