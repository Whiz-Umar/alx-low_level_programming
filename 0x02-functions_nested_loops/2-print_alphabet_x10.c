#include "main.h"

/**
* print_alphabet_10x - Prints lowercase alphabets ten times
*
* return: void
*
*/

void print_alphabet_x10(void)
{
	int counter = 0;
	int letter = 97;

	while (counter < 10)
	{

	while (letter < 123)
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	counter++;
	}
}
