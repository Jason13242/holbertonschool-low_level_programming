/*
 * File: 7-print_diagonal.c
 * Auth: Jason Ruiz
 */

#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the character to be printed.
 * Return: void.
 */

void print_diagonal(int n)
{
	int x, y;
/*
 * x - variable for printing spaces.
 */

/*
 * y - varible that prints the slash
 */
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
