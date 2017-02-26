#ifndef _ENGINE_HH_
#define _ENGINE_HH_

#include <string>
#include <SDL.h>

class Engine {
public:
	Engine(const int &, const int &, const std::string &);
	~Engine();
	int mainLoop();
	void setBackground();
	SDL_Renderer *getRenderer();
	bool getRunning();
	SDL_Window *getWindow();
	void fireRays();
	void drawPixel(int x, int y);

	void setRunning(const bool &);
protected:
	int win_x;
	int win_y;
	bool running;
	SDL_Window *window;
	SDL_Renderer *renderer;
	SDL_Event event;
	std::string title;
};

#endif