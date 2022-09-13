#include "main.h"

/**
* print_alphabet_x10 - Prints lowercase alphabets ten times
*
* return: void
*
*/

void print_alphabet_x10(void)
{
	int counter;
	int letter = 97;

	for (counter = 0; counter < 10; counter++)
	{

		while (letter < 123)
		{
		_putchar(letter);
		letter++;
		}

	_putchar('\n');
	}
}
