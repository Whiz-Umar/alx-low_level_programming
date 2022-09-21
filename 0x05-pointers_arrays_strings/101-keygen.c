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
	int passwd;
	int counter;
	int total;

	srand(time(0));
	for (counter = 0, total = 2772; total > 122; counter++)
	{
		passwd = (rand() % 125) + 1;
		printf("%c", passwd);
		total -= passwd;
	}

	return (0);
}
