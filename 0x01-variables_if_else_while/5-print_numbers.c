#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints single digits
 * Return: 0 (Success)
 */
int main(void)
{
	write(1, "0123456789\n", 11);
	return (0);
}
