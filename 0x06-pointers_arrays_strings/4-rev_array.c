/*
 * File: 4-rev_array.c
 * Auth: Jason Ruiz
 */

#include "main.h"

/**
 * reverse_array - reverse an array of ints.
 * @a: array of ints.
 * @n: # of elements of an array.
 * Return: void;
 */

void reverse_array(int *a, int n)
{

	int x, y;

	for (x = 0 ; x < n / 2 ; x++)
	{

		y = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = y;
	}
}
