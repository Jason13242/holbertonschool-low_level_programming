/*
 * File: 6-puts2.c
 * Auth: Jason Ruiz
 */

#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character
 *         of a string.
 * @str: string to be printed.
 */

void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
		else
		{
		}
	}
	_putchar('\n');
}
