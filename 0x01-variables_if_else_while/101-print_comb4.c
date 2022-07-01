#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 * in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (a == 7 && b == 8 && c == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
