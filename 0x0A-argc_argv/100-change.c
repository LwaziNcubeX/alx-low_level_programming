#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints change from amount given
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int amount;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("0\n");
		return (1);
	}

	coins += amount / 25;
	amount %= 25;

	coins += amount / 10;
	amount %= 10;

	coins += amount / 5;
	amount %= 5;

	coins += amount / 2;
	amount %= 2;

	coins += amount / 1;
	amount %= 1;

	coins += amount;

	printf("%d\n", coins);

	return (0);
}
