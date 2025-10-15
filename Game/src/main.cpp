#include <SDL2/SDL.h>
#include <SDL2/SDL_error.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>
#include<iostream>

int main(int argc,char ** argv) {
    if(SDL_Init(SDL_INIT_VIDEO) < 0){
        std::cout<<"SDL initialization faled"<<SDL_GetError()<<std::endl;
        SDL_Quit();
        return 1;
    } 
    else {
        std::cout<<"SDL initialized successfully"<<std::endl;
    }

    SDL_Window *window = SDL_CreateWindow("Space Jam", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
    if(!window){
        std::cout<<"Creating window failed"<<SDL_GetError()<<std::endl;
        SDL_Quit();
        return 1;
    }else{
        std::cout<<"Window Created successfully"<<std::endl;
    }

    SDL_Renderer * renderer = SDL_CreateRenderer(window, -1 , SDL_RENDERER_ACCELERATED) ;
    if(!renderer){
        std::cout<<"Creating renderer failed"<<SDL_GetError()<<std::endl;
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1 ;
    }else{
        std::cout<<"renderer Created successfully"<<std::endl;
    }
}
