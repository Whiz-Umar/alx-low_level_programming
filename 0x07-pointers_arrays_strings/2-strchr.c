#include <stdio.h>

/**
 * _strchr - locates a given character in a string
 *
 * @s: string to be searched
 * @c: character to be searched for
 *
 * Return: pointer to the first occurrence of c
 */

char *_strchr(char *s, char c)
{
	int i;
	char *found = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			found = &s[i];
			break;
		}
	}

	if (found == NULL && c == '\0')
		found = &s[i];

	return (found);
}
