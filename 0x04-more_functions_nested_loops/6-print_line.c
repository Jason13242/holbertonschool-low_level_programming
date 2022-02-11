/*
 * File: 6-print_line.c
 * Auth: Jason Ruiz
 */

#include "main.h"

/**
 * print_line - prints a straight line.
 * @n: character to be printed.
 * Return: void
 */

void print_line(int n)
{
	int e = 0;
/*
 * e - stands for equivalence
 */

	while (e < n && n > 0)
	{
		_putchar('_');
		e++;
	}
	_putchar('\n');
}
