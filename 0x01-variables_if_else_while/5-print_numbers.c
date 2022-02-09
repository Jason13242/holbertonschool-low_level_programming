/*
 *File: 5-print_numbers.c
 *Auth: Jason Ruiz
 */

#include<stdio.h>
/**
 * main - prints all single digits of base 10
 * Return: 0
 */

int main(void)
{
	char dig;
/*
 *dig- this variable will take the value of the digit
 */

	for (dig = '0' ; dig <= '9' ; dig++)
	{
		putchar(dig);
	}
	putchar ('\n');
	return (0);
}
