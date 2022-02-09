/*
 * File: 4-isalpha.c
 * Auth: Jason Ruiz
 */

#include"main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: char to be checked.
 * Return: 1 if c is a letter.
 */

int _isalpha(int c)
{

	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
