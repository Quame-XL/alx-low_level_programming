#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array of int
 * @width: width of array
 * @height: h of array
 * Return: null or a pointer
 */
int **alloc_grid(int width, int height)
{
	int a, b, c, d;
	int **g;

	if (width <= 0 || height <= 0)
		return (NULL);
	g = malloc(height * sizeof(int *));
	if (g == NULL)
	{
		free(g);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		g[a] = malloc(width * sizeof(int));
		if (g[a] == NULL)
		{
			for (b = a; b >= 0; b--)
			{
				free(g[b]);
			}
			free(g);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
			g[c][d] = 0;
	}
	return (g);
}
