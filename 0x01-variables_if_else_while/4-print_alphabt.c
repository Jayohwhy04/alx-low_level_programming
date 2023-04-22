#include <stdio.h>

/**
 * main - print alphabets in lowercase
 * followed by a new line excluding q and e
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e'; la != 'q')
			putchar (la);
	}
	putchar('\n');

	return (0);
}
