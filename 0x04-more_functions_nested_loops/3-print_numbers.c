#include "main.h"

/**
* print_numbers - Prints numeric characters from 0-9
*
* Return: void
*
*/

void print_numbers(void)
{
	int number = 48;

	while (number < 58)
	{
		_putchar(number);
		number++;
	}

	_putchar('\n');

}
