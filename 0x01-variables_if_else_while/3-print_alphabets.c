#include <unistd.h>
#include <stdio.h>
/**
 * main - Prints alphabet lower than aper case
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	char c[26] = "abcdefghijklmnopqrstuvwxyz";
	char d[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	i = 0;
	j = 0;
	while (i < 26 && j < 26)
	{
		putchar(c[i]);
		putchar(d[j]);
		i++;
		j++;
	}
	putchar('\n');
	return (0);
}
