/*
 * File: 5-string_toupper.c
 * auth: Jason Ruiz
 */

#include "main.h"

/**
 * string_toupper - turns string to uppercase.
 * @str: string to be modified.
 * Return: char;
 */

char *string_toupper(char *str)
{
	int x;

	for (x = 0 ; str[x] != '\0' ; x++)
	{
		if (str[x] < 123 && str[x] > 96)
		{
			str[x] = str[x] - 32;
		}
	}
	return (str);
}
