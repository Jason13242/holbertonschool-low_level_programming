/*
 * File: 7-leet.c
 * Auth: Jason Ruiz
 */

#include "main.h"

/**
 * leet - encondes a string in to 1337;
 * @str: the string to be modified;
 * Return: the modified string;
 */

char *leet(char *str)
{

	int x, y;
	char smacaps[] = "aeotl";
	char upcaps[] = "AEOTL";
	char numbers[] = "43071";

	for (x = 0 ; str[x] != '\0' ; x++)
	{
		for (y = 0 ; y <= 4 ; y++)
		{
			if (str[x] == smacaps[y] || str[x] == upcaps[y])
			{
				str[x] = numbers[y];
				break;
			}
		}
	}
	return (str);
}
