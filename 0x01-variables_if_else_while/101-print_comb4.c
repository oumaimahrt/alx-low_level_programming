#include <stdio.h>
/**
 * main - Prints single digits
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int c;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			for (c = 2; c < 10; c++)
			{
				if (i < j && j < c)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(c + 48);
					if (i + j + c != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
