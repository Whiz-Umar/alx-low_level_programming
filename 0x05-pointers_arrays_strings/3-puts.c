#include "main.h"

/**
 * _puts - prints a string followed by a new line
 *
 * @str: The string to be printed
 *
 * Returns: void
 */

void _puts(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
		_putchar(str[counter]);
counter++;

	_putchar('\n');
}
