/*
 * File: 102-print_comb5.c
 * Auth: Jason Ruiz
 */

#include <stdio.h>

/**
 * main - returns two pairs of digs
 *        with further reqs.
 * Return: 0.
 */

int main(void)
{

	int w, x, y, z;

	for (w = 0; w <= 9; w++)
	{
		for (x = 0; x <= 9; x++)
		{
			for (y = 0; y <= 9; y++)
			{
				for (z = 0; z <= 9; z++)
				{
					if (!(w == z && y == x))
					{
						putchar('0' + w);
						putchar('0' + x);
						putchar(' ');
						putchar('0' + y);
						putchar('0' + z);
						if (!(w + x == 18 && y + z == 17 && z == 9))
						{
								putchar(',');
								putchar(' ');
						 }
					}

				}
			}
		}
	}
	putchar('\n');
	return (0);
}
