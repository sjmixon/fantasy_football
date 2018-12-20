
#ifndef TEAM_FACTORY_H
#define TEAM_FACTORY_H

#include <vector>

#include "Team.h"

class Team_Factory
{
    public :
        ~Team_Factory();

        static Team_Factory& get_instance();
        std::vector<Team*> get_teams();

    private :
        Team_Factory();

        std::vector<Team*> teams;
};

#endif

