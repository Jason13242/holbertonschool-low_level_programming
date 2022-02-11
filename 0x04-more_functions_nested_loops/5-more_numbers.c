/*
 * File: 5-more_numbers.c
 * Auth: Jason Ruiz
 */

#include "main.h"

/**
 * more_numbers - rints 10 times the numbers, from 0 to 14;
 * Return: 0;
 */

void more_numbers(void)
{
	int c;
/*
 * c - this variable is a counter.
 */
	int n;
/*
 * n - i.e. the number to be printed
 */ 

	for (c = '0' ; c <= '10' ; c++)
	{
		for (n = '0' ; n <= '14' ; n++)
		{
			putchar(n);
		}
	}
	_putchar('\n');
}
