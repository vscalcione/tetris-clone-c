#ifndef HELPERS_HEADER
#define HELPERS_HEADER

#include <stdio.h>
#include <stdblib.h>
#include <stdbool.h>

void *safe_malloc(size_t size);
void shuffle_array(char *array, unsigned int nelements);
bool is_in_array(int target, const int *array, unsigned int nelements);
void set_array(int value, int *array, unsigned int nelements);

#endif
