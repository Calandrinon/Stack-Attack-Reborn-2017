#ifndef CRANE_H
#define CRANE_H
#include "main.h"

struct Crane {
	SDL_Texture *texture;
	SDL_Rect dstrect;
};

void draw_pipe(SDL_Renderer *renderer);

void init_crane(struct Crane *crane, SDL_Renderer *renderer);

#endif 