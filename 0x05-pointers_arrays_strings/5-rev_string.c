#include "main.h"

/**
 * rev_string - reverse any given string
 *
 * @s: The string to be reversed
 *
 * Returns: void
 */

void rev_string(char *s)
{
	char tmp1, tmp2;

	int i = _strlen(s) - 1;
	int j = 0;

	while (i != j && j < i)
	{
		tmp1 = s[i];
		tmp2 = s[j];
		s[i] = tmp2;
		s[j] = tmp1;

		j++;
		i--;
	}
}



/**
 * _strlen - This function evaluates the length of a given string.
 *
 *@s: The string to be evaluated
 *
 * Return: Length of s
 */

int _strlen(char *s)
{
	long int length = 0;

	while (s[length] != '\0')
		length++;

return (length);
}
