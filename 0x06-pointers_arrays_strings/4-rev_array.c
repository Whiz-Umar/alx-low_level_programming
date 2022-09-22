/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array to be reversed
 * @n: number of elements in the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	i = 0;
	j = n - 1;
	while (i <= j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
