/*
 * File: 5-rev_string.c
 * auth: Jason Ruiz
 */

#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string.
 * Return: Void.
 */

void rev_string(char *s)
{

	int x, y, z;

	x = 0;
	y = 0;
	while (s[y] != '\0')
	{
		y++;
	}
	y--;
	while (y > x)
	{
		z = s[y];
		s[y--] = s[x];
		s[x++] = z;
	}
}
