/*
 * File: 9-times_table.c
 * Auth: Jason Ruiz
 */

#include"main.h"

/**
 * times_table - print the table of nine
 * Return: Always 0
 */

void times_table(void)
{
	int n;
/*
 * n - stands for the number 9 is multiplied by.
 */
	int r;
/*
 * r - stands for the result of 9 * n.
 */
	int c;
/*
 * c - stands for counter, it counts that the
 *      whole table is printed 10 times
 */
	for (c = 0 ; c < 10 ; c++)
	{
		for (n = 0 ; n <= 9 ; n++)
		{
			r = 9 * n;
			if (r == 0)
			{
				_putchar(r + '0');
			}
			if ((r <= 9) && (r > 0))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((r % 10) + '0');
			}
			else if (r >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
