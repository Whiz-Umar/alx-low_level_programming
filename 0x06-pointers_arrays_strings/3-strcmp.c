#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int result, i, length1, length2;

	length1 = _strlen(s1);
	length2 = _strlen(s2);
	result = 0;
	i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			result = (int)s1[i] - (int)s2[i];
			break;
		}
		i++;
	}

	if (result == 0 && length1 != length2)
	{
		result = s2[i] * -1;
	}
	return (result);
}

/**
 * _strlen - returns the length of a given string
 *
 * @s: The string to b evaluated
 *
 * Return: int
 */

int _strlen(char *s)
{
	long int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
