#include "main.h"

/**
 * puts2 - starting from the first, prints every other character of a string
 *
 * @str: The string with the characters to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int length = 0;

	while (str[i] != '\0')
		i++;

	length = i - 1;
	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		if (i + 2 > length)
			break;
		i += 2;
	}
	_putchar('\n');
}
