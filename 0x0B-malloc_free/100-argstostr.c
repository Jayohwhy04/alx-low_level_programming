#include <stdlib.h>
#include "main.h"

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 *
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int d, f, s = 0, t = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (d = 0; d < ac; d++)
	{
		for (f = 0; av[d][f]; f++)
			t++;
	}
	t += ac;

	str = malloc(sizeof(char) * t + 1);
	if (str == NULL)
		return (NULL);
	for (d = 0; d < ac; d++)
	{
		for (f = 0; av[d][f]; f++)
		{
			str[s] = av[d][f];
			s++;
		}
		if (str[s] == '\0')
		{
			str[s++] = '\n';
		}
	}
	return (str);
}
