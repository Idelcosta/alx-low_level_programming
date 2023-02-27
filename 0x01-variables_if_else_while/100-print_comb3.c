#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
        int n;
        int i;

        for (n = 0; n < 10; n++)
        {
                for (i = 0; i < 10; i++)
		{
			putchar((n % 10) + '0');
			putchar((i % 10)+ '0');

                        if (n == 9 && i == 9)
			       continue;

		        putchar(',');
                        putchar(' ');
                }
	}

	putchar ('\n');

	return (0);
}

