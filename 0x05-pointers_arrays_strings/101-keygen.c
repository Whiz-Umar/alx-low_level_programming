#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - generates random passwords for 101-crackme
  *
  * Return: zero
  */
  
int main(void)
{
	int passwd[12];
	int counter;
	int total;

	srand(time(NULL));
	for (counter = 0, total = 2772; total > 122; counter++)
	{
		passwd[12] = (rand() % 125) + 1;
		printf("%c", passwd[12]);
		total -= passwd[12];
	}

	return (0);
}
