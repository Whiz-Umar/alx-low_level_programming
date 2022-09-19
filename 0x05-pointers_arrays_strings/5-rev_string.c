#include "main.h"

/**
 * rev_string - prints a string in reverse order followed by a new line
 *
 * @s: The string to be printed
 *
 * Returns: void
 */

void rev_string(char *s)
{
	int counter = _strlen(s) - 1; char tmp;

	while (s[counter] >= 0)
	{
		tmp = s[counter] /*_putchar(s[counter]);*/
		counter--; continue;
	}
	/*_putchar('\n');*/
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
