
#ifndef GAME_FACTORY_H
#define GAME_FACTORY_H

#include <vector>

#include "Game.h"

class Game_Factory
{
    public :
        ~Game_Factory();

        static Game_Factory& get_instance();
        std::vector<Game*> get_games();

    private :
        Game_Factory();

        std::vector<Game*> games;
};

#endif

