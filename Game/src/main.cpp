#include<SDL2/SDL.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>

int main(int argc ,char **argv){
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window *window = NULL;
    SDL_Renderer * renderer = NULL ;
    window = SDL_CreateWindow("Space Jam",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,1270,720,SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

}
