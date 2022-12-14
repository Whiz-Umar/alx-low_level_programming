#include "main.h"

/**
 * print_rev - prints strings in a reverse order followed by a new line
 *
 * @s: The string to be printed
 *
 * Returns: void
 */

void print_rev(char *s)
{
	long int counter = _strlen(s) - 1;

	while (s[counter] != 0)
	{
		_putchar(s[counter]);
		counter--;
	}
	_putchar('\n');
}

/**
 * _strlen - This function evaluates the length of a given string.
 *
 * @s: The string to be evaluated
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
