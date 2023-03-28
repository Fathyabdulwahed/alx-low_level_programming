#include "main.h"

/**
 * print_alphabet - uses the _putchar function to print letters form a to z
*/

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
}
