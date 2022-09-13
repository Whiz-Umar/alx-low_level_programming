#include "main.h"

/**
* print_alphabet - Prints lowercase alphabets
*
* return: void
*
*/

void print_alphabet(void)
{
	int letter = 97;

	while (letter < 123)
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');

}
