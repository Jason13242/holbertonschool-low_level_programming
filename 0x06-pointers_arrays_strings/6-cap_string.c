/*
 * File: 6-cap_string.c
 * Auth: Jason Ruiz
 */

#include "main.h"

/**
 * cap_string - capitalizes each word of a string;
 * @str: the string to be modified;
 * Return: the modified string;
 */

char *cap_string(char *str)
{
	int x;

	for (x = 0; str[x] != '\0' ; x++)
	{
		if (str[0] <= 122 && str[0] >= 97)
		{
			str[0] = str[0] - 32;
		}
		if (str[x] == ' ' || str[x] == '\t' || str[x] == '\n' || str[x] == ','
|| str[x] == ';' || str[x] == '.'
|| str[x] == '!' || str[x] == '?'
|| str[x] == '"' || str[x] == '('
|| str[x] == ')' || str[x] == '{'
|| str[x] == '}')
		{
			if (str[x + 1] <= 122 && str[x + 1] >= 97)
			{
				str[x + 1] = str[x + 1] - 32;
			}
		}
	}
	return (str);
}
