#include "main.h"

/**
* more_numbers - Prints numeric characters from 0-14 ten times
*
* Return: void
*
*/

void more_numbers(void)
{
	int counter = 0;
	int number = 0;

	while (counter < 10)
	{
		while (number < 15)
			{
				if  (number >= 10)
				{
					_putchar(((number / 10) % 10) + '0');
				}
			_putchar((number % 10) + '0');
			number++;
			}
		counter++;
		_putchar('\n');
		/*counter++;*/
	}
}
