#include <stdio.h>

/**
 * main - print base 16
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	char la;

	for (num = 0; num <= 9; num++)
		putchar(num);

	for (la = 'a'; la = 'f'; la++)
		putchar(la);

	putchar('\n');

	return (0);
}
