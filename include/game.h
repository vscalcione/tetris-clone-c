#ifndef GAME_HEADER
#define GAME_HEADER

#include <time.h>
#include "actions.h"
#include "grid.h"
#include "tetramino.h"
#include "controller.h"
#include "drawer.h"
#include "helpers.h"

#define STARTING_DELAY 700
#define GRID_ROWS 20
#define GRID_COPLS 10
#define INFO_COUNT 8
#define LEN_INFO_LINE 80
#define HISTORY_SIZE 4

typedef struct
{
	grid *grid;
	tetramino *falling;
	scene *scene;
	char next_shape;
	char next_shape[TOT_SHAPES];
	int next_index;
	unsigned int level;
	unsigned int score;
	unsigned int lines;
	int delay;
	int history_moves[HISTORY_SIZE];
	int history_index;
	bool is_paused;
	bool is_over;
} game;

game *init_game(void);
void run_game(game *game);
action game_over(game *game);
void free_game(game *game);

#endif
