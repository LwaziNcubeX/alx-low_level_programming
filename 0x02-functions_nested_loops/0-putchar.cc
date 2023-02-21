#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char *word = "_putchar";

	while (*word)
	{
		putchar(*word);
		word++;
	}

	putchar('\n');
	return (0);
}
