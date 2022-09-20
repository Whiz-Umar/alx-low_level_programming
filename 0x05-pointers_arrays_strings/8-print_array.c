#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers followed by a new line
 *
 * @a: points to an array of integers
 * @n: total number of elements in &a to be printed
 * @counter: array elements counter
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int counter;

	for (counter = 0; counter < n; counter++)
	{
		printf("%d", a[counter]);

		if (counter + 1 < n)
			printf(", ");
	}
	printf("\n");
}
