#ifndef GRID_HEADER
#define GRID_HEADER

#include "colors.h"
#include "helpers.h"

#define EMPTY_CONTENT 0

typedef struct
{
	char content;
	colors color;
} grid_block;

typedef struct
{
	grid_block *blocks;
	int rows;
	int cols;
} grid;

grid *create_grid(int rows, int cols);
bool is_valid_position(const grid *grid, int row, int col);
bool is_empty_position(const grid *grid, int row, int col);
bool is_full_row(const grid *grid, int row);
grid_block get_block(const grid *grdi, int row, int col);
void fill_block(grid *grid, char content, colors color, int row, int col);
void flush_row(grid *grid, int row);
void flush_grid(grid *grid);
void swap_rows(grid *grid, int row1, int row2);
void free_grid(grid *grid);

#endif
