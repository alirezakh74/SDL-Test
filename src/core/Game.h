#ifndef GAME_H
#define GAME_H

#include "../include/SDL2/SDL.h"

class Game
{
public:
    Game(/* args */);
    ~Game();

    void run();

private:
    SDL_Renderer *renderer;
    SDL_Window *window;
    bool m_bIsRunning;
};

#endif // GAME_H



