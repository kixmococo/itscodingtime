// includes the SDL2 header

#include <SDL2/SDL.h>	// these are the main SDL2 functions
#include <iostream>	//this is for logging errors to the terminal >>okay, not true, this is what lets me std::cout blah blah blah

int main(int argc, char* argv[]) {
	
	//tbh not really sure what this did, video says it is what is actually initializing SDL ... video ? so i think this returns a 0 if successful and a 1 if it fails
	
	if (SDL_Init(SDL_INIT_VIDEO) != 0) {
		std::cerr << "yep, you're fucked (sdl_init fail); " << SDL_GetError() <<std::endl;
		return 1;
	}

	//this part should actually make the window
	
	SDL_Window* window = SDL_CreateWindow(
		"TMJ has begun...",
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		1920, 1080,
		SDL_WINDOW_SHOWN
	); //frowny face
	
	if (!window) {
        	std::cerr << "SDL_CreateWindow failed: " << SDL_GetError() << std::endl;
        	SDL_Quit();  // this is supposed to close the window when something goes wrong
	        return 1;
	}

	// truthfully i started burning out here so the rest may be sloppy asf
	
	SDL_Renderer* renderer = SDL_CreateRenderer(
		window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC
	);

	if (!renderer) {
		std::cerr << "still fucked (sdl_render fail); " << SDL_GetError() << std::endl;
		SDL_DestroyWindow(window);
		SDL_Quit();
		return 1;
	}
	//at this point, i think SDL has been fully rendered and my brain is sILLY
	//next TODO make the main game loop
	//decided to just push, also JUST realized visual studio looks sooo much nicer than vim'ing everything
	bool running = true;
	SDL_Event event;

	while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {   // i made an x button
                running = false;
            }
        }

        // blackface
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);  // r, g, b, y
        SDL_RenderClear(renderer);

        //TODO i need to render sht here

        //TODO learn this later
        SDL_RenderPresent(renderer);
    }

    //i think this to clear resources on pc
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
//mental block, stopping here, do the TODOs
	
	
