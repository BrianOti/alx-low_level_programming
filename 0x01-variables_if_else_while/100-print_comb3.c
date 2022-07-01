#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 * a comma followed by a space, in ascending order.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;

	for (a = 0; a <= 89; a++)
		if (a < ((a % 10) * 10) + (a / 10))
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			if (a < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}

	putchar('\n');

	return (0);
}
