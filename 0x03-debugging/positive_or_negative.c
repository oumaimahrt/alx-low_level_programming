#include "main.h"
/**
 * positive_or_negative - tests if num is + or -
 * @i: the num to be tested
 * Return: void
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
