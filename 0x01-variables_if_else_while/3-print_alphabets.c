#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char Letter;

	for (Letter = 'a'; Letter <= 'z'; Letter++)
		putchar(Letter);

	for (Letter = 'A'; Letter <= 'Z'; Letter++)
		putchar(Letter);

	putchar('\n');

	return (0);
}
