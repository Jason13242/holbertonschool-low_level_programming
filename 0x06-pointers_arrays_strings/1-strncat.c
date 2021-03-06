/*
 * File: 1-strncat.c
 * Auth: Jason Ruiz
 */

#include "main.h"

/**
 * _strncat - _strncat function is similar to the _strcat
 *            function, except that it will use at most n
 *            bytes from src; and src does not need to be
 *            null-terminated if it contains n or more bytes
 * @dest: destination.
 * @src: source.
 * @n: # of bytes for memory allocation.
 * Return: resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}
	for (y = 0; src[y] != '\0' && y < n ; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x + y] = '\0';

	return (dest);
}
