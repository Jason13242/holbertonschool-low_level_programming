/*
 * File: 2-print_alphabet_x10.c
 * Auth: Jason Ruiz
 */

#include "main.h"

/**
 * print_alphabet_x10 - this functions
 *                      prints 10 times
 *                      the alphabet
 * Return: 0.
 */

void print_alphabet_x10(void)
{

	char l;
/*
 * l - is a variable that represents
 *     each letter to be printed.
 */

	int n = 0;
/*
 * n - this variable is a counter
 *     that informs how many times
 *     the alphabet has been printed
 *     so it prints exactly 10 times.
 */

	while (n <= 9)
	{
		for (l = 'a' ; l <= 'z'; l++)
		{
			_putchar(l);
		}
		n++;
		_putchar ('\n');
	}
}
