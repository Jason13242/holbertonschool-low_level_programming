/*
 * File: 0-isupper.c
 * Auth: Jason Ruiz
 */

#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: input integer
 * Return: 1 if c is upper
 *         0 if c is lower.
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{

		return (1);
	}
	else
	{

		return (0);
	}
}
