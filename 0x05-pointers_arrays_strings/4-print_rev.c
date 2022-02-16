/*
 * File: 4-print_rev.c
 * Auth: Jason Ruiz
 */

#include "main.h"

/**
 * print_rev - prints reversed string.
 * @s: pointer to the string to print
 * Return: void
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x])
		x++;

	while (x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');

}
