/*
 *File: 1-alphabet.c
 *Auth: Jason Ruiz
 */

#include"main.h"
/**
 * print_alphabet - this functions prints
 *                  the alphabet in lowcase.
 */
	void print_alphabet(void)
{
/*
 * c - this variable represents each letter.
 */
		char c;

		for (c = 'a'; c <= 'z' ; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
}
