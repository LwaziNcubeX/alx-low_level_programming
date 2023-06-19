#include <stdio.h>
/**
 * main - demonstrates the power of the C preprocessor
 * Return: Always 0
 */

#define H 72
#define E 69
#define L 76
#define O 79
#define W 87
#define R 82
#define D 68
#define SPACE 32

#define PRINT_CHAR(c) printf("%c", c)

#define PRINT_H PRINT_CHAR(H)
#define PRINT_E PRINT_CHAR(E)
#define PRINT_L PRINT_CHAR(L)
#define PRINT_O PRINT_CHAR(O)
#define PRINT_SPACE PRINT_CHAR(SPACE)
#define PRINT_W PRINT_CHAR(W)
#define PRINT_R PRINT_CHAR(R)
#define PRINT_D PRINT_CHAR(D)

#define PRINT_HELLO PRINT_H; PRINT_E; PRINT_L; PRINT_L; PRINT_O
#define PRINT_WORLD PRINT_W; PRINT_O; PRINT_R; PRINT_L; PRINT_D

#define PRINT_HELLO_WORLD PRINT_HELLO; PRINT_SPACE; PRINT_WORLD

int main(void)
{
	PRINT_HELLO_WORLD;
	printf("\n");
	return (0);
}
