
#ifndef PLAYER_FACTORY_H
#define PLAYER_FACTORY_H

#include <vector>

#include "Player.h"

class Player_Factory
{
    public :
        ~Player_Factory();

        static Player_Factory& get_instance();
        std::vector<Player*> get_players();

    private :
        Player_Factory();

        std::vector<Player*> players;
};

#endif

