#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers from command line arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, num = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num += atoi(argv[i]);
	}
	printf("%d\n", num);
	return (0);
}
