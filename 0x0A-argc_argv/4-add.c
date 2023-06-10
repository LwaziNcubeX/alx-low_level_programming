#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers & prints results
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int num = 0;

	for (i = 1; argv[i] != NULL; i++)
	{
		num += atoi(argv[i]);

		if (argc != 3)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", num);
	return (0);
}
