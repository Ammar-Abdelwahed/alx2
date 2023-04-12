#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenat all arguments using malloc
 * @ac: number of arguments
 * @av: the arguments
 * Return: the oncatenated arguments if success NULL otherwise
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = ac;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
	}

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		if (str[k] == '\0')
		{
			str[k++] = '\n';
		}
	}
	return (str);
}
