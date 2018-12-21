
#include <stdio.h>
#include <string.h>

#include "Player_Factory.h"

Player_Factory::~Player_Factory()
{
    std::vector<Player*>::iterator it = players.begin();
    while (it != players.end())
    {
        delete (*it);
        it = players.erase(it);
    }
}

Player_Factory::Player_Factory() :
    players()
{
    int d0;
    char position[8];
    char name[64];
    FILE* file = fopen("database/players.txt", "r");
    fscanf(file, "%d %s", &d0, position);
    while (!feof(file))
    {
        fgets(name, 64, file);
        strtok(name, "\n");
        players.emplace_back(new Player(d0, std::string(position),
                std::string(name + 1)));
        fscanf(file, "%d %s", &d0, position);
    }
    fclose(file);
}

Player_Factory& Player_Factory::get_instance()
{
    static Player_Factory tf;
    return (tf);
}

std::vector<Player*> Player_Factory::get_players()
{
    return (players);
}

