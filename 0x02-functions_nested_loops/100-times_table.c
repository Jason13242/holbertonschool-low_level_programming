/*
 * File: 100-times_table.c
 * Auth: Jason Ruiz
 */
#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the table of
 *                     a given number n.
 * @n: the number to be given.
 *Return: 0.
 */

void print_times_table(int n)
{

	int x = n;

	int c, b, r;

	if (x > 0 && x < 15)
	{
		/*	printf("antes del primer loop");*/
		for (b = 0; b <= n ; b++)
		{
			for (c = 0; c <= n ; c++)
			{
				r = b * c;

				if (r < 10)
				{
					if (c == 0)
					{
						_putchar('0' + r);
						_putchar(',');
					}
					else if (c >= 1 && c < n)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + r);
						_putchar(',');
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + r);
					}
				      
				}
				else if ( r < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + r / 10);
					_putchar('0' + r % 10);
					if (c < n)
					{
						_putchar(',');
					}
					
				}
				else
				{
					_putchar(' ');
					_putchar('0' + r / 100);
					_putchar('0' + (r - 100) / 10);
					_putchar('0' + r % 10);
					if (c < n)
					{
						_putchar(',');
					}
				}

			}
			putchar('\n');
		}
	}
	else 
	{
		return;
	}
}
