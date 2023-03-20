#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints single digits
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	i = 122;
	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
