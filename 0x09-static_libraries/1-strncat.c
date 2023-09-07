#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int g;
	int k;

	g = 0;
	while (dest[g] != '\0')
	{
		g++;
	}
	k = 0;
	while (k < n && src[k] != '\0')
	{
	dest[g] = src[k];
	g++;
	k++;
	}
	dest[g] = '\0';
	return (dest);
}
