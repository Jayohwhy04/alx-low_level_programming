#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print numbers to 14
 *
 * Return: return nothing
 */

void more_numbers(void)
{
	int n1, n2;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 < 15; n2++)
		{
			if (n2 >= 10)
			{
				putchar((n2 / 10) + 48);
			}
			putchar((n2 % 10) + 48);
		}
		putchar('\n');
	}
}
