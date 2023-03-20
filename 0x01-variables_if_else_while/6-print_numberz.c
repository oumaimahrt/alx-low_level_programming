#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints single digits
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		putchar(i + 48);
		i++;
	}
	putchar('\n');
	return (0);
}
