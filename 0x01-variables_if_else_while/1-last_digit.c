/*
 *File: 1-last_digit.c
 *Auth: Jason Ruiz
 */

#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - gets the last digit of a large number and establishes a relation of
 *        wheter this last digit falls within one of three parameters.
 * Return: 0
 */

int main(void)
{
	int n;
	int lastd;
/*
 * n - variable provided
 */

/*
 * lastd - this variable stands por last digit of n
 */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes there */
	lastd = n % 10;
	if (lastd == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastd);
	else if (lastd > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	else if (lastd < 6 && lastd != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	return (0);
}
