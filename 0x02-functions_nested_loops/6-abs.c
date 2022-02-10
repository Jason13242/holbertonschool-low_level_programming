/*
 * File: 6-abs.c
 * Auth: Jason Ruiz
 */

#include"main.h"

/**
 * _abs - omputes the absolute value of an integer.
 * @n : the inpur, i.e. number.
 * Return: absolute value
 */

#include "main.h"

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
