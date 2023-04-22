#include <stdio.h>

/**
 * main - print alphabets in lower case
 * Return: Always 0
 */
int main(void)
{
	char pc;

	for (pc = 'a'; pc <= 'z'; pc++)
	{
		putchar(pc);
	}
	putchar('\n');
	return (0);
}
