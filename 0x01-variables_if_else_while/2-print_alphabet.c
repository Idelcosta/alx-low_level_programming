#include <stdio.h>

/**
 * main - we want to print a to z 
 *
 * Return: Always 0.
 */
int main(void)

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
