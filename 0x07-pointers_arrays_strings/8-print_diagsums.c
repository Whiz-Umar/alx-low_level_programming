#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers
 *
 * @a: array of integers in square matrix
 * @size: array size
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum, counter, step;

	sum = 0;
	step = 0;
	for (counter = 0; counter < size; counter++)
	{
		sum += a[step];
		step += size + 1;
	}
	printf("%d, ", sum);

	sum = 0;
	step = 0;
	for (counter = 0; counter < size; counter++)
	{
		step += size - 1;
		sum += a[step];
	}
	printf("%d\n", sum);
}
