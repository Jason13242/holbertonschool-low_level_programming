/*
 * File: 3-print_numbers.c
 * Auth: Jason Ruiz
 */

#include"main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * Returns: void
 */

void print_numbers(void)
{
	int n;
/*
 * n - i.e. the number to be printed.
 */

	for (n = '0' ; n <= '9' ; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
