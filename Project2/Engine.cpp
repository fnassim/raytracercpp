#include "Engine.hh"
#include <iostream>
#include <SDL.h>

Engine::Engine (const int &_x, const int &_y, const std::string &_title) {
	running = true;
	SDL_Init(SDL_INIT_VIDEO);              // Initialize SDL2
										   // Create an application window with the following settings:
	window = SDL_CreateWindow(
		_title.c_str(),                  // window title
		SDL_WINDOWPOS_UNDEFINED,           // initial x position
		SDL_WINDOWPOS_UNDEFINED,           // initial y position
		_x,                               // width, in pixels
		_y,                               // height, in pixels
		SDL_WINDOW_OPENGL                  // flags - see below
	);

	win_x = _x;
	win_y = _y;
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	setBackground();

	// Check that the window was successfully created
	if (window == NULL) {
		// In the case that the window could not be made...
		running = false;
		SDL_Quit();
	}
}

void Engine::setBackground() {
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	SDL_RenderClear(renderer);

	SDL_RenderPresent(getRenderer());
}

SDL_Renderer *Engine::getRenderer() {
	return renderer;
}

bool Engine::getRunning() {
	return running;
}

SDL_Window *Engine::getWindow() {
	return window;
}

void Engine::setRunning(const bool &_running) {
	running = _running;
}

void Engine::drawPixel(int x, int y) {
	SDL_SetRenderDrawColor(getRenderer(), 255, 255, 0, 255);
	SDL_RenderDrawPoint(getRenderer(), x, y);
}
/*
void Engine::fireRays() {
	for (int y = 0; y < win_y; y++) {
		for (int x = 0; x < win_x; x++) {
			if (1024 > 768) {

			}
			drawPixel(x, y);
		}
	}
	SDL_RenderPresent(getRenderer());
}*/

int Engine::mainLoop() {
	SDL_Event event;
	
	while (running) {
		



		while (SDL_PollEvent(&event)) {
			

			if (event.type == SDL_QUIT) {
				running = false;
				SDL_DestroyWindow(this->window);
				// Clean up
				SDL_Quit();
			}
		}
	}
	return 1;
}

Engine::~Engine()
{

}