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
	for (counter = 0, total = 3333; total > 127; counter++)
	{
		passwd = (rand() % 127) + 1;
		printf("%c", passwd);
		total -= passwd;
	}

	return (0);
}
