/*
 *File: 0-positive_or_negative.c
 * Auth: Jason Ruiz
 */
#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - funcion que determina si el numero propuesto es  mayor,
 *        menor o igual a cero
 * Return: 0
 */

int main(void)
{

/*
 * n - es una variable ya proporcionada.
 */

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes there */
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);


	return (0);
}
