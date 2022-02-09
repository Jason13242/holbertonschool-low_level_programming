/*
 * File: 3-islower.c
 * Auth: Jason Ruiz
 */

#include"main.h"

/**
 *  _islower - function that prints 
 *             that checks if a char
 *             is upper or lowecase
 * Return: 1 if c lowercase, 0 if upper.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
