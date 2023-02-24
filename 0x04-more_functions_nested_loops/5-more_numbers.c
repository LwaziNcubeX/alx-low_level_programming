#include "main.h"
/**
 * more_numbers - from 0 to 14 - 10 lines
 * Return: numbers + a new line
 */
void more_numbers(void)
{
	int n;
	int x;

	for (n = 0; n < 10; n++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x > 9)
				_putchar((x / 10) + '0');
		_putchar((x % 10) + '0');
		}
	_putchar('\n');
	}
}
