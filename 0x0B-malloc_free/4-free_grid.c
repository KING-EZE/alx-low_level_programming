#include "main.h"

/**
 * free_grid - removing memory allocation
 * @grid: memory block to be freed
 * @height: the height of the array
 * Return: return void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
