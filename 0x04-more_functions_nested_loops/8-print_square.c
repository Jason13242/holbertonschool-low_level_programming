/*
 * File: 8-print_square.c
 * Auth: Jason Ruiz
 */

#include "main.h"

/**
 * print_square - prints a square
 * @size: variable for the size of the square
 * Return: void
 */

void print_square(int size)
{

	int x, y;
/*
 * x - identifies de height.
 */

/*
 * y - identifies de length
 */

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			_putchar('#');

			for (y = 2; y <= size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
