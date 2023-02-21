#include "main.h"
/**
 * print_alphabet_x10 - entry point
 *
 * _putchar: prints next line
 */

void print_alphabet_x10(void)
{
	int n = 0;
	char ltr;

	while (n++ < 10)
	{
		for (ltr = 'a'; ltr <= 'z'; ltr++)
			_putchar(ltr);
		_putchar('\n');
	}
}
