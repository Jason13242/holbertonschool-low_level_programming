/*
 * File: 9-fizz_buzz.c
 * Auth: Jason Ruiz
 */

#include "stdio.h"

/**
 * main - fizz buzz challenge.
 * Return: Always cero
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		int z = x % 3;
		int y = x % 5;

		if (z == 0 && y == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		if (z == 0 && y != 0)
		{
			printf("Fizz");
			printf(" ");
		}
		if (y == 0 && z != 0)
		{
			printf("Buzz");
			printf(" ");
		}
		if (y != 0 && z != 0)
		{
		printf("%i", x);
		printf(" ");
		}
	}
	printf("\n");
	return (0);
}
