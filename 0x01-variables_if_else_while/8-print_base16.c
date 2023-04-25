#include <stdio.h>

/**
 * main - print base 16
 *
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 0; la <= 9; la++)
	{
		putchar(la);
	}
	for (la = 'a'; la <= 'f'; la++)
	{
		putchar(la);
	}

	putchar('\n');

	return (0);
}
