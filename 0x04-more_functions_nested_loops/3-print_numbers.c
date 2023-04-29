#include "main.h"
#include <stdio.h>

/**
 * print_numbers - functions that print all numbers from 
 * 0 to 9
 *
 * Return:return nothing
 */
void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
}
