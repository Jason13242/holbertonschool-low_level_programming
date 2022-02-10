/*
 * File: 8-24_hours.c
 * Auth: Jason Ruiz
 */

#include"main.h"

/**
 * jack_bauer - prints every minute of the day
 *              of Jack Bauer, starting
 *              from 00:00 to 23:59.
 * Return: 0
 */

void jack_bauer(void)
{

	for (w = '0' ; w <= '2' ; w++)
	{
		for (x = '0' ; x <= '9' ; x++)
		{
			for (y  = '0' ; y <= '5' ; y++)
			{
				for (z  = '0' ; z <= '9' ; z++)
				{
					if ((w == '2' && x <= '3') || (w <= '1'))
					{
						_putchar(w);
						_putchar(x);
						_putchar(':');
						_putchar(d);
						_putchar(e);
						_putchar('\n');
					}
				}
			}
		}
	}
}
