#include "main.h"
/**
 * main - print alphabets
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
