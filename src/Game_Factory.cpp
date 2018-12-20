
#include <stdio.h>
#include <string.h>

#include "Game_Factory.h"

Game_Factory::~Game_Factory()
{
    std::vector<Game*>::iterator it = games.begin();
    while (it != games.end())
    {
        delete (*it);
        it = games.erase(it);
    }
}

Game_Factory::Game_Factory() :
    games()
{
    int d0;
    int d1;
    int d2;
    int d3;
    int d4;
    FILE* file = fopen("database/games.txt", "r");
    while (!feof(file))
    {
        fscanf(file, "%d %d %d %d %d\n", &d0, &d1, &d2, &d3, &d4);
        games.emplace_back(new Game(d0, d1, d2, d3, d4));
    }
    fclose(file);
}

Game_Factory& Game_Factory::get_instance()
{
    static Game_Factory tf;
    return (tf);
}

std::vector<Game*> Game_Factory::get_games()
{
    return (games);
}

