#include <stdio.h>
/**
 * main - Prints alpha lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	char c[24] = "abcdfghijklmnoprstuvwxyz";

	i = 0;
	while (i < 25)
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
