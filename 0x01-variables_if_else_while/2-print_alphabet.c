#include <stdio.h>

/**
 * main - we want to print a to z 
 *
 * Return: Always 0.
 */
int main(void)
{
	char A;

	for (A = 'a'; A <= 'z'; A++)
		putchar(A);

	putchar('\n');

	return (0);
}
