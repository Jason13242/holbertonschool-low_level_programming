/*
 * File: 7-puts_half.c
 * Auth: Jason Ruiz
 */

#include "main.h"

/**
 * puts_half - print the second half of the string.
 * @str: the string to be printed.
 */

void puts_half(char *str)
{

	int x, y, n, z;

	for (x = 0; str[x] != '\0'; x++)
	{
		/*	_putchar(str[x]);*/
	}
	y = x;

	z = y / 2;

	n = ((y - 1) / 2);

	if (y % 2 == 0)
	{
		while (y >= z)
		{
			_putchar(str[y]);
			y--;
		}
	}
	else
	{
		while (y >= n)
		{
			_putchar(str[y]);
			y--;
		}
	}
_putchar('\n');
}
