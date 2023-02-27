#include <stdio.h>

/**
 * puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
