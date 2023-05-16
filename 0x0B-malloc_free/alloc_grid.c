#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int height, int width) {
if (height <= 0 || width <= 0) {
return NULL;
}
int **grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL) {
return NULL;
}
for (int i = 0; i < height; i++) {
grid[i] = (int *)malloc(width * sizeof(int));
if (grid[i] == NULL) {
for (int j = 0; j < i; j++)
free(grid[j]);
}
free(grid);
return NULL;
}
}
return grid;
}
