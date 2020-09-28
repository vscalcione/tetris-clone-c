#ifndef CONTROLLER_HEADER
#define CONTROLLER_HEADER

#include "actions.h"
#include "tetramino.h"

bool perform_action(grid *grid, tetramino *tetramino, action action);
bool rotate_tetramino(grid *grid, tetramino *tetramino);
bool move_tetramino(grid *grid, tetramino *tetramino, action action);
bool drop_tetramino(grid *grid, tetramino *tetramino)
bool check_position(const grid *grid, const tetramino *tetramino, int row, int col);

#endif
