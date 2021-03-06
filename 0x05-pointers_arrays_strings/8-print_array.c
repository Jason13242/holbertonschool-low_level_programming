/*
 * File: 8-print_array.c
 * Auth: Jason Ruiz
 */

#include "main.h"
#include<stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: array.
 * @n: # of elements to be printed.
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (!(x == (n - 1)))
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
