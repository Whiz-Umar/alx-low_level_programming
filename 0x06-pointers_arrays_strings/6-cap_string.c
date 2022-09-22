#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: string to be capitalized
 *
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	char c;
	int i, start;
	int capitalize = 0;

	start = 1;
	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		if (start == 1)
		{
			start = 0;
			capitalize = 1;
		}
		if (is_delimiter(c) == 1)
		{
			capitalize = 1;
			continue;
		}

		if (capitalize == 1)
		{
			if (_islower(c) == 1)
				str[i] = (int)c - 97 + 65;
			capitalize = 0;
		}
	}

	return (str);
}

/**
 * is_delimiter - checks if a character is a delimiter
 *
 * @c: character to be tested
 *
 * Return: 1 if the character is a delimiter, otherwise 0
 */

int is_delimiter(char c)
{
	int result, i;
	char delimiters[] = " \t\n,;.!?\"(){}";

	result = 0;
	i = 0;
	for (i = 0; delimiters[i] != '\0'; i++)
	{
		if (delimiters[i] == c)
		{
			result = 1;
			break;
		}
	}
	return (result);
}

/**
 * _islower - checks for uppercase
 *
 * @c: character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _islower(int c)
{
	int result, lower, max;

	lower = 97;
	max = lower + 25;

	if (c >= lower && c <= max)
		result = 1;
	else
		result = 0;

	return (result);
}
