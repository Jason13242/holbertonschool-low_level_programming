/*
 * File: 0-strcat.c
 * Auth: Jason Ruiz
 */

#include "main.h"

/**
 * _strcat - appends the src string to the dest string.
 * @dest: destination.
 * @src: source.
 * Return: pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0' ; x++)
	{
	}
	for (y = 0; src[y] != '\0' ; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x + y] = '\0';

	return (dest);
}
