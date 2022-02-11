/*
 * File: 3-print_numbers.c
 * Auth: Jason Ruiz
 */

#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int n = 48;
/*
 * n - i.e. the number to be printed.
 */

	while ((n > 47) && (n < 58))
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
