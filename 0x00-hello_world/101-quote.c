#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints without printf and puts
 *
 * Return: 1 (success).
 */

int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fputs("%s", quote, stdout);
	return (1);
}
