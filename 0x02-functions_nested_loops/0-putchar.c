/*
 *File: 0-putchar.c
 *Auth: Jason Ruiz
 */

#include"main.h"

/**
 * main - program that prints _putchar, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	char x[] = "_putchar";
/*
 * x - variable is a string that stores the string to be printed
 *     the [] append a slash zero at the end.
 */
	int y = 0;
/*
 * y - variable represents each of the letters of the string x.
 */

	while (x[y] != '\0')
	{
		_putchar(x[y]);
		y++;
	}
	_putchar('\n');
	return (0);
}
