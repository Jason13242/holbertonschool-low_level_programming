/*
 *File: 6-print_numberz.c
 * Auth: Jason Ruiz
 */

#include<stdio.h>

/**
 * main - prints all single digit numbers of base 10
 *        starting from 0, followed by a new line.
 * Return: 0
 */

int main(void)
{
	int c;

/*
 *c- this integer will take the value
 *   of each of the digits to be printed.
 */

	for (c = '0' ; c <= '9' ; c++)
{
	putchar(c);
}
	putchar('\n');

	return (0);
}
