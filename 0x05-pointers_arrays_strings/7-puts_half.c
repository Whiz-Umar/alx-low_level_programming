#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line
 *
 * @str: The string to be operated on
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, length, half;

	i = 0;
	while (str[i] != '\0')
		i++;

	length = i + 1;

	if (length % 2 == 0)
		half = length / 2;
	else
		half = (length - 1) / 2;

	i = half;
	while (i < length - 1)
		_putchar(str[i++]);

	_putchar('\n');
}
