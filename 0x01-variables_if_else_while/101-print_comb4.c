/*
 * File: 101-print_comb4.c
 * Auth: Jason Ruiz
 */

#include <stdio.h>

/**
 * main - print a combination of 3
 *        dig with further req.
 * Return: 0.
 */

int main(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (z = 0; z <= 9; z++)
			{
				if (x != y && y != z && x < y && y < z)
				{
					putchar('0' + x);
					putchar('0' + y);
					putchar('0' + z);
					if (x + y + z != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
