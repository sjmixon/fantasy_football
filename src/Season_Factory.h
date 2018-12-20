
#ifndef SEASON_FACTORY_H
#define SEASON_FACTORY_H

#include <string>
#include <vector>

#include "Season.h"

class Season_Factory
{
    public :
        ~Season_Factory();

        static Season_Factory& get_instance();
        std::vector<Season*> get_seasons();
        std::string get_team_name(int, int);

    private :
        std::vector<Season*> seasons;

        Season_Factory();
};

#endif

