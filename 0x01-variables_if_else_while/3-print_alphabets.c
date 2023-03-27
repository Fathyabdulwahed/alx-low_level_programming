#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphapet in lower and upper case
 *
 * Return: 0 (success)
 */

int main(void)
{
	char x = 'a';
	char y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
