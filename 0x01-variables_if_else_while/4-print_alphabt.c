#include <stdio.h>
/**
 * main - Prints alpha lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	char e = 'e';
	char q = 'q';
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != e && low != q)
		putchar(low);
	}
	putchar('\n');
	return (0);
}
