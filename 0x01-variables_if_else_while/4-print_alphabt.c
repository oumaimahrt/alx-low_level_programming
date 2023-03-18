#include <stdio.h>
/**
 * main - Prints alpha lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	char c[26] = "abcdefghijklmnopqrstuvwxyz";

	i = 0;
	while (i < 26)
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
