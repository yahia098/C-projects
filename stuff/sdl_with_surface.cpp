#include <SDL2/SDL.h>
#include <SDL2/SDL_video.h>

int main() {
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* window = SDL_CreateWindow("Surface Animation",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        640, 480, 0);

    SDL_Surface* windowSurface = SDL_GetWindowSurface(window);
    SDL_Surface* image = SDL_LoadBMP("image.bmp");

    SDL_Rect dst = {0, 200, image->w, image->h};

    int running = 1;
    while (running) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT)
                running = 0;
        }

        // Fill background white
        SDL_FillRect(windowSurface, NULL, SDL_MapRGB(windowSurface->format, 255, 255, 255));

        // Draw image at new position
        SDL_BlitSurface(image, NULL, windowSurface, &dst);

        // Update window
        SDL_UpdateWindowSurface(window);

        // Move image
        dst.x += 4;
        if (dst.x > 640) dst.x = -image->w; // loop around

        SDL_Delay(16); // ~60 FPS
    }

    SDL_FreeSurface(image);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
