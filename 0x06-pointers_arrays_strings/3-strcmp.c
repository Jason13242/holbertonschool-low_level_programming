/*
 * File: 3-strcmp.c
 * Auth: Jason Ruiz
 */

#include "main.h"

/**
 * _strcmp - work exactly like strcmp;
 * @s1: string1;
 * @s2: string2;
 */

int _strcmp(char *s1, char *s2)
{

	int x;

	for (x = 0; s1[x] != '\0' || s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
		{
			break;
		}
	}
	return (s1[x] - s2[x]);
}
