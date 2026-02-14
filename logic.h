#ifndef LOGIC_H
#define LOGIC_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "gui.h"

#define width 10
#define length 25
#define player 3
#define floor 3
#define max_stairs 100
#define max_poles 100
#define max_walls 100
#define BAWANA_CELLS 12
#define bawana_start_y 6
#define bawana_end_y 9
#define bawana_start_x 20
#define bawana_end_x 24

// Global variables (extern declarations)
extern int bawana_effect_type[player];
extern int in_bawana[player];
extern int bawana_effect_turns[player];
extern int player_mp[player];
extern int player_floor[player];
extern int player_entered[player];
extern char player_name[player];
extern int player_y[player];
extern int player_x[player];
extern int player_dir[player];
extern int throw_counters[player];
extern int player_eliminated[player];
extern int current_stair_direction;
extern int stair_direction_change_rounds;
extern char directions[4][10];
extern int bawana_initialized;

typedef struct {
    int consumable;
    int bonus;
    int multiplier;
} cell_properties;

typedef enum {
    BAWANA_FOOD_POISONING,
    BAWANA_DISORIENTED,
    BAWANA_TRIGGERED,
    BAWANA_HAPPY,
    BAWANA_MOVEMENT_POINTS
} BawanaCellType;

typedef struct {
    BawanaCellType type;
    int value;
    int y, x;
} BawanaCell;

extern BawanaCell bawana_cells[BAWANA_CELLS];

// Function declarations------------------------------------------

void log_error(const char* filename, int line_num, const char* element_type, 
               const char* specific_error, FILE* error_file);
int validate_stair(int sf, int sy, int sx, int ef, int ey, int ex);
int validate_pole(int sf, int ef, int y, int x);
int validate_wall(int f, int sy, int sx, int ey, int ex);
int validate_flag(int f, int y, int x);
const char* get_bawana_cell_type_string(int type);
void initialize_bawana_cells();
int out_start_area(int y, int x);
int in_maze(int x, int y);
int maze2(int y, int x);
int maze3(int y, int x);
int is_wall_blocking(int current_floor, int from_y, int from_x, int to_y, int to_x, 
                     int wall_floors[], int wall_start_y[], int wall_start_x[], 
                     int wall_end_y[], int wall_end_x[], int wall_count);
int can_move_with_walls(int player_floor, int from_y, int from_x, int to_y, int to_x,
                        int wall_floors[], int wall_start_y[], int wall_start_x[],
                        int wall_end_y[], int wall_end_x[], int wall_count);
void transport_to_bawana(int player_index);
void check_player_capture(int current_player);


int run_game();

#endif
