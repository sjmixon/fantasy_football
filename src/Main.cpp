
#include <iostream>
#include <vector>

#include "Game.h"
#include "Game_Factory.h"
#include "Season.h"
#include "Season_Factory.h"
#include "Team.h"
#include "Team_Factory.h"

int main(int, char**)
{
    for (auto* g : Game_Factory::get_instance().get_games())
    {
        int y = g->get_year();
        std::cout << y << " Week " << g->get_week() << ": " <<
                Season_Factory::get_instance().get_team_name(y,
                g->get_teams()[0]) << " vs. " <<
                Season_Factory::get_instance().get_team_name(y,
                g->get_teams()[1]) <<
                std::endl;
    }
    return (0);
}

