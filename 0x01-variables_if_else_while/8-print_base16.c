#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints alphas & single digits
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
