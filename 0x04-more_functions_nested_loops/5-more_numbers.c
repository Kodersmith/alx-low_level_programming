#include "main.h"

/**
 *more_numbers-prints 0 to 14 ten times
 *Return: Always 0
 */
void more_numbers(void)
{
	int i, ch;

	for (i = 0, i < 9; i++)
{
	for (ch = 0, ch < 14; ch++)
{
	if (ch >= 9)
{
	_putchar((ch / 10) + '0');
}
	_putchar((ch % 10) + '0');
}
	_putchar('\n');
}
}
