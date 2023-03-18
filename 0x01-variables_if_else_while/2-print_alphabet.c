#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints alphabet
 * Return: 0 (Success)
 */
int main(void)
{
	char c[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	i = 0;
	while (i < 26)
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
