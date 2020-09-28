#ifndef TETRAMINO_HEADER
#define TETRAMINO_HEADER

#include <string.h>
#include "colors.h"
#include "grid.h"
#include "helpers.h"

#define TOT_SHAPES 7
#define TETRAMINO_ROWS 4
#define TETRAMINO_COLS 4
#define ROTATIONS 4
#define TEXTURE '#'

extern const char shapes_letters[TOT_SHAPES];
extern const char shapes[TOT_SHAPES][ROTATIONS][TETRAMINO_ROWS][TETRAMINO_COLS];

typedef struct
{
	int size;
	char shape[ROTATIONS][TETRAMINO_ROWS][TETRAMINO_COLS];
	int rotation;
	colors color;
	bool on_grid;
	int row;
	int col;
	bool is_locked;
} tetramino;

tetramino *create_tetramino(void);
void change_shape(tetramino *tetramino, char shape_letter);
void rotate_forward(tetramino *tetramino);
void rotate_backwards(tetramino *tetramino);
void put_on_grid(grid *grid, tetramino *tetramino, int row, int col=
void remove_from_grid(grid *grid, tetramino *tetramino);

#endif
