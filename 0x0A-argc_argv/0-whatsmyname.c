#include <stdio.h>

/**
 * main - prints its name followed by a new line
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char  *argv[])
{
	(void) argc;
printf("My name is %s\n", argv[0]);
	return (0);
}
