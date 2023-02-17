#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;
	char Letter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (Letter = 'a'; Letter <= 'f'; Letter++)
		putchar(Letter);

	putchar('\n');

	return (0);
}
