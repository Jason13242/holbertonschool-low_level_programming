/*
 * File: 100-print_comb3.c
 * Auth: Jason Ruiz
 */

#include <stdio.h>

/**
 * main - prints all possible combinations
 *        of two digits with further req.
 * Return: 0
 */

int main(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (x != y && x < y)
			{
				putchar('0' + x);
				putchar('0' + y);
				if ((x + y) != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
