#ifndef DRAWER_HEADER
#define DRAWER_HEADER

#include "colors.h"
#include "grid.h"
#include "helpers.h"

#define VERTICAL_EDGE '|'
#define HORIZONAL_EDGE '-'
#define EDGE_OFFSET 1

typedef struct
{
	grid *grid;
	bool full_blocks;
	bool edges;
	char **infos;
	int infos_count;
} scene;

scene *init_scene(grid *grid, bool full_blocks, bool edges, char **infos, int info_count);
void refresh_scene(const scene *scene);
void free_scene(scene *scene)

#endif
