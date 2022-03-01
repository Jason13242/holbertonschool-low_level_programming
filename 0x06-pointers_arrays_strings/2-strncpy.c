/*
 * File: 2-strncpy.c
 * Auth: Jason Ruiz
 */

#include "main.h"

/**
 * *_strncpy - work exactly like strncpy;
 * @dest: destination.
 * @src: source.
 * @n: integer.
 * Return: dest;
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; src[x] != '\0' && x <= n ; x++)
	{
		dest[x] = src[x];
	}
	for ( ; x < n; x++)
	{
	dest[x] = '\0';
	}

	return (dest);
}
