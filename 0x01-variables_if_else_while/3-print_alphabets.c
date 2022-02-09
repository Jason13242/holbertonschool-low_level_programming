/*
 *File: 3-print_alphabets.c
 * Auth: Jason Ruiz
 */

#include<stdio.h>

/**
 *main - prints thw alphabet in lower and uppercase.
 *Return: 0
 */

int main(void)
{
	char cl;
/*
 *cl - variable declaration stands for characters lowercase
 */
	char cu;
/*
 *cu - variable declaration stands for character uppercase
 */

	for (cl = 'a'; cl <= 'z'; cl++)
	{
		putchar(cl);
	}
	for (cu = 'A'; cu <= 'Z'; cu++)
	{
		putchar(cu);
	}
	putchar ('\n');
	return (0);
}
