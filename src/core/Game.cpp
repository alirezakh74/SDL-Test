#include "Game.h"

Game::Game(/* args */)
{
    SDL_Init(SDL_INIT_VIDEO);

    window = SDL_CreateWindow(
        "SDL2Test",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        640,
        480,
        0);

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);

    if(window && renderer)
    {
        m_bIsRunning = true;
    }
    else
    {
        m_bIsRunning = false;
    }
}

Game::~Game()
{
    SDL_DestroyWindow(window);
    SDL_Quit();
}

void Game::run()
{
    while (m_bIsRunning)
    {

        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            if (SDL_QUIT == event.type)
            {
                m_bIsRunning = false;
                break;
            }
        }

        SDL_SetRenderDrawColor(renderer, 255, 0, 0, SDL_ALPHA_OPAQUE);
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);
    }
}