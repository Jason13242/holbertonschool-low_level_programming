/*
 * File: 9-times_table.c
 * Auth: Jason Ruiz
 */

#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: always 0
 */

void times_table(void)
{
	int x, y, z;
/*
 * z - stands for the result of the operation.
 */

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			k = y * x;
			if (y == 0)
			{
				_putchar(z + '0');
			}

			if (z < 10 && y != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else if (z >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
