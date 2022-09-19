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
	int counter = '\0';

	while (s[counter] != 0)
	{
		_putchar(s[counter]);
		counter++;
	}
	_putchar('\n');
}
