#include "main.h"

/**
 * print_rev - prints strings in a reverse order followed by a new line
 *
 * @str: The string to be printed
 *
 * Returns: void
 */

void print_rev(char *s)
{
	int counter = '\0';

	while (str[counter] != 0)
	{
		_putchar(str[counter]);
		counter--;
	}
	_putchar('\n');
}
