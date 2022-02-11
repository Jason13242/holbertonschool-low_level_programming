/*
 * File: 4-print_most_numbers.c
 * Auth: Jason Ruiz
 */

#include "main.h"

/**
 * print_most_numbers - prints 0 to 9
 *                       w/o 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{

	int n;
/*
 * n - i.e. the number to be printed.
 */

	for (n = 48 ; n <= 57 ; n++)
	{
		if ((n != 50) || (n != 52))
		{
			_putchar(n);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
