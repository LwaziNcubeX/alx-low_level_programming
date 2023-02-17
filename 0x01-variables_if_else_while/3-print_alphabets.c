#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase, followed by a new line.
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
