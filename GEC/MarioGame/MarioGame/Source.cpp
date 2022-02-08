#include <SDL.h>
#undef main
#include <SDL_image.h>
#include <SDL_mixer.h>
#include "Constants.h"
#include <iostream>
using namespace std;

//Globals
SDL_Window* g_window = nullptr;

//function prototypes
bool InitSDL();
void CloseSDL();
bool Update();



bool InitSDL()
{
	//Setup SDL
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		cout << "SDL did not initialise. Error: " << SDL_GetError();
		return false;
	}
	else
	{
		//setup passed so create window
		g_window = SDL_CreateWindow("Games Engine Creation",
			SDL_WINDOWPOS_UNDEFINED,
			SDL_WINDOWPOS_UNDEFINED,
			SCREEN_WIDTH,
			SCREEN_HEIGHT,
			SDL_WINDOW_SHOWN);
		//did the window get created?
		if (g_window == nullptr)
		{
			//window failed
			cout << "Window was not created. Error: " << SDL_GetError();
			return false;
		}
	}
}

void CloseSDL() 
{
	//release the window
	SDL_DestroyWindow(g_window);
	g_window = nullptr;

	//quit SLD subsystems
	IMG_Quit();
	SDL_Quit();
}

bool Update()
{
	//Event handler
	SDL_Event e;

	//get events
	SDL_PollEvent(&e);

	//handle the events
	switch (e.type)
	{
		//click the 'X' to quit
	case SDL_QUIT:
		return true;
		break;
	}

	return false;
}

int main()
{
	bool quit = false;

	while (!quit)
	{
		quit = Update();
	}
}





