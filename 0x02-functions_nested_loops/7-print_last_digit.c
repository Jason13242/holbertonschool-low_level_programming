/*
 * File: 7-print_last_digit.c
 * Auth: Jason Ruiz
 */

#include"main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: the input,i.e a number
 * Return: the last digit of the input
 */

int print_last_digit(int n)
{
/*
 * lastd - extract the last
 *         digit of the number.
 */

	int lastd;

	if (n >= 0)
	{
		lastd = n % 10;
		_putchar(lastd + '0');
		return (lastd);
	}
	else
	{
		lastd = -1 * (n % 10);
		_putchar(lastd + '0');
		return (lastd);
	}
}
