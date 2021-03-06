#ifndef PLAYER_H
#define PLAYER_H
#include "main.h"
#include "block.h"

struct Player {
	SDL_Texture *sprite_sheet;
	SDL_Rect frame, dstrect;
	SDL_Renderer *renderer;
	bool jumping, stepped_off, on_block, in_air;
	Uint32 l_upd_time_hrz, l_upd_time_vrt, l_upd_time_jmp,
	       l_upd_time_anim_l, l_upd_time_anim_r;
	int num_frames_vert, num_frames_horz,
	    velocity, jmp_vel,
	    frame_l, frame_r,
	    ground_level;
	void (*animate)(struct Player *self);
};

void init_player(struct Player *player, SDL_Renderer *renderer);

void draw_player(struct Player *player);

void player_block_collision(struct Player *player, struct Block *block);

void animate_left(struct Player *self);

void animate_right(struct Player *self);

void stand(struct Player *self);

void jump(struct Player *player);

#endif
