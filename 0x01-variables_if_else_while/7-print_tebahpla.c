/*
 *File: 7-print_tebahpla.c
 *Auth: Jason Ruiz
 */

#include<stdio.h>

/**
 * main - prints the alphabet lower case in reverse
 * Return: 0
 */

int main(void)
{
	char c;

/*
 *c- this variable is suposed to take the value
 *   of each of the characters to be printed.
 */



	for (c = 'z'; c >= 'a' ; c--)
{
	putchar(c);
}
	putchar('\n');
	return (0);
}
