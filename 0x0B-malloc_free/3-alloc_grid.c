#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates tow dimension array
 * @height: the height of the array
 * @width: the width of the array
 * Return: the array if succes NULL otherwsie
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width  <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			while (i >= 0)
			{
				free(arr[i--]);
			}
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
