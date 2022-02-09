/*
 *File: 2-print_alphabet.c
 *Auth: Jason Ruiz
 */

#include<stdio.h>
/**
 * main - this function prints the lowecase alphabet
 * Return: 0
 */

int main(void)
{
	char c;
/*
 *c - this variable will take the value of each letter to be printed.
 */
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar ('\n');
	return (0);
}
