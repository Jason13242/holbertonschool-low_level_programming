/*
 * File: 3-puts.c
 * Auth: Jason Ruiz
 */

#include "main.h"

/**
 * _puts - prints a string
 * @str:  char.
 * Return: void.
 */

void _puts(char *str)
{

	int x;

	for (x = 0 ; str[x] != '\n' ; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
