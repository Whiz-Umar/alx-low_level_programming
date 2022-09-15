#include "main.h"

/**
* print_most_numbers - Prints numeric characters from 0-9
* with the exception of 2 and 4
*
* Return: void
*
*/

void print_most_numbers(void)
{
	int number = 48;

	while (number < 58)
	{
		if (number == 50 || number == 52)
		{
			number++;
		}
		_putchar(number);
		number++;
	}

	_putchar('\n');

}
