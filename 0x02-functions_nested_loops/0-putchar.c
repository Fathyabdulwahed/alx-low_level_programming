#include "main.h"

/**
 * main - entry point
 *
 * Description: program that prints _putchar
 *
 * Return: 0 (success)
 */

int main(void)
{
	char a[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(a[ch]);
	_putchar('\n');

	return (0);
}
