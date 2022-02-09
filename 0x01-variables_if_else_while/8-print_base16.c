/**
 *File: 8-print_base16.c
 *Auth: Jason Ruiz
 */
#include<stdio.h>
/**
 *main- this program prints all the numbers
 *      of base 16 in lowercase, followed by
 *      a new line.
 */
int main(void)
{
/**
 *c- is the declared variable that will take
 *   the place of the hexagesimal number.
 */
	char c;

	for (c = '0' ; c <= '9' ; c++)
	{
		putchar (c);
	}
	for (c = 'a' ; c <= 'f' ; c++)
	{
		putchar (c);
	}
	putchar ('\n');
	return (0);
}
