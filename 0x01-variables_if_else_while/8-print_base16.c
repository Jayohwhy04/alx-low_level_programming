#include <stdio.h>

/**
 * main - print base 16
 *
 * Return: Always 0
 */
int main(void)
{
	char c;
	char la;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (la = 'a'; la <= 'f'; la++)
	{
		putchar(la);
	}

	putchar('\n');

	return (0);
}
