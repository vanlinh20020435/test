#include<SDL.h>
#include<SDL_image.h>
using namespace std;
enum key {
	key_defaut,
	key_up,
	key_down,
	key_left,
	key_right,
	key_total
};
const int SCREEN_WIDTH = 1366;
const int SCREEN_HEIGHT = 768;
SDL_Window* g_window = NULL;
SDL_Surface* gScreenWindow = NULL;
SDL_Surface* g_background[key_total];
SDL_Surface* background = NULL;
bool loadImage() {
	g_background[key_defaut] = IMG_Load("press.bmp");
	if (g_background[key_defaut] == NULL) return false;
	g_background[key_up] = IMG_Load("up.bmp");
	if (g_background[key_up] == NULL) return false;
	g_background[key_down] = IMG_Load("down.bmp");
	if (g_background[key_down] == NULL) return false;
	g_background[key_left] = IMG_Load("left.bmp");
	if (g_background[key_left] == NULL) return false;
	g_background[key_right] = IMG_Load("right.bmp");
	if (g_background[key_right] == NULL) return false;
	return true;
}
void close() {
	SDL_FreeSurface(background);
	background = NULL;
	for (int i = 0; i < key_total; i++) {
		SDL_FreeSurface(g_background[i]);
		g_background[i] = NULL;
	}
	SDL_DestroyWindow(g_window);
	g_window = NULL;
	IMG_Quit();
	SDL_Quit();
}
bool init() {
	if (SDL_Init(SDL_INIT_EVERYTHING) >= 0) {
		g_window = SDL_CreateWindow("test", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (g_window != NULL) {
			gScreenWindow = SDL_GetWindowSurface(g_window);
		}
	}
	return true;
}
int main(int argc, char* argv[]) {
	if (init() && loadImage()) {
		bool quit = false;
		SDL_Event e;
		background = g_background[key_defaut];
		while (!quit) {
			while (SDL_PollEvent(&e) != 0) {
				if (e.type == SDL_MOUSEBUTTONDOWN || e.type == SDL_QUIT) quit = true;
				else if (e.type == SDL_KEYDOWN) {
					if (e.key.keysym.sym == SDLK_UP) background = g_background[key_up];
					else if (e.key.keysym.sym == SDLK_DOWN) background = g_background[key_down];
					else if (e.key.keysym.sym == SDLK_LEFT) background = g_background[key_left];
					else if (e.key.keysym.sym == SDLK_RIGHT) background = g_background[key_right];
				}
			}
			background = SDL_ConvertSurface(background, gScreenWindow->format, 0);
			SDL_Rect screenRect;
			screenRect.x = 0;
			screenRect.y = 0;
			screenRect.w = SCREEN_WIDTH;
			screenRect.h = SCREEN_HEIGHT;
			SDL_BlitScaled(background, NULL, gScreenWindow, NULL);
			SDL_UpdateWindowSurface(g_window);
		}
	}
	close();
	return 0;
}
